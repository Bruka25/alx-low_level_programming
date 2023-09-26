#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_listint_safe - Frees the safe version linked list
 *
 *@h: Pointer to pointer to the head of the list
 *
 *Return: Size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	listint_t *current_node;
	size_t count;

	if (h == NULL || *h == NULL)
		return (0);

	current_node = *h;
	*h = NULL;

	while (current_node != NULL)
	{
		count++;
		temp = current_node;
		current_node = current_node->next;

		if (temp <= current_node)
		{
			*h = NULL;
			break;
		}

		free(temp);
	}

	return (count);
}
