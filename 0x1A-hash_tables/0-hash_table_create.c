#include "hash_tables.h"

/**
  *hash_table_create - Creates a hash table
  *
  *@size: Size of the array
  *
  *Return: NULL if something went wrong, or
  *        pointer to the newly created table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int t = 0;
	hash_table_t *table = NULL;
	hash_node_t **arr = NULL;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);

	if (arr == NULL)
		return (NULL);

	for (; t < size; ++t)
		arr[t] = NULL;

	table->size = size;
	table->array = arr;

	return (table);
}
