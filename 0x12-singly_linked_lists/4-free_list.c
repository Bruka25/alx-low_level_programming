#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 *free_list - A function that frees a list
 *
 *@head: Pointer to the head node
 *
 *Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
