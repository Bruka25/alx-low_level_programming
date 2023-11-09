#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes node at index
 *
 *@head: Pointer to pointer to start of the list
 *@index: index of the node
 *
 *Return: 1 if it succeded, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *next, *prev;
	unsigned int curent;

	if (*head == NULL)
		return (-1);

	for (temp = *head, curent = 0, prev = NULL; temp && curent < index; curent++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	next = temp->next;
	if (prev == NULL)
	{
		free(temp);
		if (next != NULL)
		{
			next->prev = NULL;
			*head = next;
		}
		else
			*head = NULL;
	}
	else if (next == NULL)
	{
		prev->next = NULL;
		free(temp);
	}
	else
	{
		prev->next = next;
		next->prev = prev;
		free(temp);
	}

	return (1);
}
