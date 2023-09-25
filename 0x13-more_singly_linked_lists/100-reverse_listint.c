#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *reverse_listint - Function that reverses a listint_t linked list
 *
 *@head: Pointer to a pointer to the head of the list
 *
 *Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	current_node = *head;
	if (current_node == NULL)
		return (NULL);

	next_node = current_node->next;
	current_node->next = NULL;

	while (next_node != NULL)
	{
		current_node = next_node;
		next_node = next_node->next;
		current_node->next = *head;
		*head = current_node;
	}

	return (*head);
}
