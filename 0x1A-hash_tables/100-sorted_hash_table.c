#include "hash_tables.h"

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 *shash_table_delete - Deletes a sorted hash table
 *
 *@ht: Pointer to the sorted hash table
 *
 *Return: Void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *nod;
	shash_node_t *temp;

	if (ht == NULL)
		return;

	nod = ht->shead;
	while (nod)
	{
		temp = nod->snext;
		free(nod->key);
		free(nod->value);
		free(nod);
		nod = temp;
	}

	free(h->array);
	free(h);
}

/**
 *shash_table_print_rev - Prints a sorted hash table
 *                        Reversely
 *
 *@ht: Pointer to the sorted hash table to print
 *
 *Return: Void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nod;

	if (ht == NULL)
		return;

	nod = ht->stail;

	printf("{");
	while (nod != NULL)
	{
		printf("'%s': '%s'", nod->key, nod->value);
		nod = nod->sprev;
		if (nod != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 *shash_table_print - Prints a hash table in a sorted manner
 *
 *@ht: Pointer to the sorted hash table
 *
 *Return: Void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nod;

	if (ht == NULL)
		return;

	nod = ht->shead;

	printf("{");
	while (nod != NULL)
	{
		printf("'%s': '%s'", nod->key, nod->value);
		nod = nod->snext;
		if (nod != NULL)
			printf(", ");
	}
	printf("}\n");
}



/**
 *shash_table_set - Sets an element to a sorted hash table
 *
 *@ht: Pointer to the sorted hash table
 *@key: Key to add to the table
 *@value: Value associated with the key
 *
 *Return: 0 in case of failure otherwise 1
 *        means success
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_hash;
	shash_node_t *temp;
	char *cpy_val;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy_val = strdup(value);
	if (cpy_val == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = cpy_val;
			return (1);
		}
		temp = temp->snext;
	}

	new_hash = malloc(sizeof(shash_node_t));
	if (new_hash == NULL)
	{
		free(cpy_val);
		return (0);
	}
	new_hash->key = strdup(key);
	if (new_hash->key == NULL)
	{
		free(cpy_val);
		free(new_hash);
		return (0);
	}
	new_hash->value = cpy_val;
	new_hash->next = ht->array[indx];
	ht->array[indx] = new_hash;

	if (ht->shead == NULL)
	{
		new_hash->sprev = NULL;
		new_hash->snext = NULL;
		ht->shead = new_hash;
		ht->stail = new_hash;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_hash->sprev = NULL;
		new_hash->snext = ht->shead;
		ht->shead->sprev = new_hash;
		ht->shead = new_hash;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new_hash->sprev = temp;
		new_hash->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new_hash;
		else
			temp->snext->sprev = new_hash;
		temp->snext = new_hash;
	}

	return (1);
}


/**
 *shash_table_create - Creates a sorted hash table
 *
 *@size: Size of new sorted hash table
 *
 *Return: Pointer to the new sorted table or NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hasht;
	unsigned long int h;

	hasht = malloc(sizeof(shash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(shash_node_t *) * size);

	if (hasht->array == NULL)
		return (NULL);

	for (h = 0; h < size; h++)
		hasht->array[h] = NULL;
	hasht->shead = NULL;
	hasht->stail = NULL;

	return (hasht);
}
