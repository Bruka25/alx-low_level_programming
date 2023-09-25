#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_nodeint_at_index - Returns the nth node of a listint_t linked list
 *
 *@head: Pointer to the head of the list
 *@index: Index of the node
 *
 *Return: nth node of the list or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count;

	node_count = 0;

	while (node_count != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		node_count++;
	}

	return (head);
}
