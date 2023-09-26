#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *find_listint_loop - Finds loop in linked list
 *
 *@head: Pointer to the start of the node
 *
 *Return: Address of node or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp < head)
			return (head);
	}
	return (NULL);
}
