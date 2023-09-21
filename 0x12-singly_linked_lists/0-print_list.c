#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *print_list - Prints all the elements of list_t list
 *
 *@h: Pointer to the first element in the list
 *
 *Return: The number of nodes or str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);

	nodes = 1;

	printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
		nodes += print_list(h->next);
	return (nodes);
}

