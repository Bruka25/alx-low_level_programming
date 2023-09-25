
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *insert_nodeint_at_index - Inserts a new node
 *
 *@head: Pointer to a pointer to the head of the list
 *@index: Index of the list where new node should be added
 *@n: Value to store inside the node's new field
 *
 *Return: Address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current_node;
	listint_t *new_node;
	unsigned int node_pos;

	if (head == NULL)
		return (NULL);
	current_node = *head;
	count_node = 0;
	if (current_node == NULL && index != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (node_pos != index - 1)
	{
		current_node = current_node->next;
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		node_pos++;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
