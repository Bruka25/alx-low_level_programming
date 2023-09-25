
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint - Function that frees a listint_t list
 *
 *@head: Pointer to the start of the node
 *
 *Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *free_node;

	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
