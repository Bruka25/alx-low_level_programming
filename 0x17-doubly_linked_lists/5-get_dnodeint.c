#include "lists.h"

/**
 *get_dnodeint_at_index - Get node at index
 *
 *@head: Pointer to the head of the node
 *@index: Index to return
 *
 *Return: Index of node or NULL if node does
 *        not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n;

	temp = head;
	for (n = 0; temp && n < index; temp = temp->next, n++)
		;

	return (temp);
}
