#include "lists.h"

/**
 *print_dlistint - Prints all the elemnts of doubly linked list
 *
 *@h: Pointer to the head of doubly linked list
 *
 *Return: Number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *buff;
	size_t node;

	buff = h;
	while (buff && buff->prev)
		buff = buff->prev;

	for (node = 0; buff; node++, buff = buff->next)
		printf("%d\n", buff->n);

	return (node);
}
