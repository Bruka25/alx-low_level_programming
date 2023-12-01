#include "hash_tables.h"

/**
 *hash_table_delete - Deletes a hash table
 *
 *@ht: Hash table given
 *
 *Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *previous;
	unsigned long int hash;
	unsigned long int i;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0, hash = ht->size; i < hash; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			previous = temp;
			temp = temp->next;
			free(previous->key);
			free(previous->value);
			free(previous);
		}
	}

	free(ht->array);
	free(ht);
}
