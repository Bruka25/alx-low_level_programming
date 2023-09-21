#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *list_len - A function that returns the number of elements
 *           in a linked list_t list
 *
 *@h: Pointer to the first node
 *
 *Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);
	nodes = 0;

	nodes++;
	if (h->next != NULL)
		nodes += list_len(h->next);
	return (nodes);
}

