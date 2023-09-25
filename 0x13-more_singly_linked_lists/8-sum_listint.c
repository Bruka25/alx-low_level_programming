#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 *
 *@head: Pointer to the head of the list
 *
 *Return: Sum of data or 0 if it's empty
 */

int sum_listint(listint_t *head)

{
	int add_data;

	add_data = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		add_data += head->n;
		head = head->next;
	}

	return (add_data);
}
