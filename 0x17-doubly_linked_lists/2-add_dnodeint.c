#include "lists.h"

/**
 *add_dnodeint - Adds node to the beginning of a list
 *
 *@head: Pointer to a pointer of a list
 *@n: Number to be added to a list
 *
 *Return: Address of new node or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = *head;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
