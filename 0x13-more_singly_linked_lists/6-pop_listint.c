#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *pop_listint - Function that deletes the head node of a listint_t linked list
 *
 *@head: Pointer to a pointer of the head of linked list
 *
 *Return: The head node’s data (n) or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int n;

	current_node = *head;
	if (current_node == NULL)
		return (0);

	n = current_node->n;
	*head = current_node->next;

	free(current_node);
	return (n);
}
