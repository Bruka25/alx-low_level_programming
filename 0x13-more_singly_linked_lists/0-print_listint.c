#include "lists.h"
#include <stdio.h>

/**
 *print_listint - Prints all elements of listint_t
 *
 *@h: Pointer to the start of a list
 *
 *Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes;

	num_of_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
