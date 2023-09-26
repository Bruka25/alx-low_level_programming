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
	listint_t *slow_ptr, *fast_ptr;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow_ptr = head->next;
	fast_ptr = (head->next)->next;

	while (fast_ptr)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;

			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			return (slow_ptr);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = (fast_ptr->next)->next;
	}

	return (NULL);
}
