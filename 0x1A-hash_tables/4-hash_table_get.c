#include "hash_tables.h"

/**
 *hash_table_get - Gets a value associated with a key
 *
 *@ht: The hash table
 *@key: Key to use to get value
 *
 *Return: The Value associated with key or
 *        NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (temp == NULL)
		return (NULL);

	while (strcmp(temp->key, key) != 0)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	return (temp->value);
}
