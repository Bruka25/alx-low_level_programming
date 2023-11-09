#include "lists.h"

/**
 *free_dlistint - Frees a doubly linked list
 *
 *@head: pointer to the head of a list
 *
 *Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
