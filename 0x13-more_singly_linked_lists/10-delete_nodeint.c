
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *delete_nodeint_at_index - deletes node at index
 *
 *@head: Pointer to a pointer to start of the list
 *@index: Index of the node that has to be deleted
 *
 *Return: 1 if succeeded, or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index);
{
	listint_t *current_node;
	listint_t *previous_node;
	unsigned int node_pos;

	if (head == NULL)
		return (-1);

	node_pos = 0;
	current_node = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	while (node_pos != index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		if (current_node == NULL)
			return (-1);
		node_pos++;
	}

	previous_node->next = current_node->next;
	free(current_node);
	return (1);
}
