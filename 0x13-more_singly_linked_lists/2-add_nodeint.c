#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint - Addsa new node at the beginning of a list
 *
 *@head: Poointer to a pointer of the start of linked list
 *@n: Int value to the n field of the new node
 *
 *Return: Pointer to the new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
