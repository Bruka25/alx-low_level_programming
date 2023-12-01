#include "hash_tables.h"
#include <stdio.h>

/**
 *hash_table_print - Functions that Prints a hash table
 *
 *@ht: The hash table
 *
 *Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int h;
	int switch;

	if (ht == NULL)
		return;

	printf("{");

	for (h = 0, switch = 0; h < ht->size; h++)
	{
		temp = ht->array[h];
		if (temp != NULL)
		{
			if (switch == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);

			while ((temp = temp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}

			switch = 1;
		}
	}

	printf("}\n");
}
