#include "hash_tables.h"

/**
 *hash_table_set - Adds an element to the hash table
 *
 *@ht: Hash table to add or update the key/value
 *@key: Key to add
 *@value: Value associated with the key
 *
 *Return: 1 for success, or
 *        Otherwise 0 if it failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash;
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}

	new_hash = malloc(sizeof(hash_node_t));

	if (new_hash == NULL)
		return (0);

	new_hash->key = strdup(key);
	new_hash->value = strdup(value);
	new_hash->next = NULL;

	if (ht->array[index] != NULL)
		new_hash->next = ht->array[index];

	ht->array[index] = new_hash;

	return (1);
}
