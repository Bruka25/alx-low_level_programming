#include "lists.h"

/**
 *add_dnodeint_end - Adds node at the end of the list
 *
 *@head: Pointer to a pointer of the doubly linked list
 *@n: Value to be added
 *
 *Return: New node or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
        dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	temp->prev = *head;
	return (temp);
}
