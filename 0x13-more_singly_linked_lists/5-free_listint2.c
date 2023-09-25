#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint2 - frees listint_t list and sets the head to NULL
 *
 *@head: Pointer to a pointer to the start of the node
 *
 *Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *free_node;
	listint_t *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while (current_node != NULL)
		{
			free_node = current_node;
			current_node = current_node->next;
			free(free_node);
		}
		*head = NULL;
	}
}
