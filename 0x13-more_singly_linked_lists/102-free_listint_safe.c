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
	listint_t *remove_node;
	listint_t *current_node;
	listadd_t *add_head;
	listadd_t *check_loop;
	size_t count;

	count = 0;
	current_node = *h;
	add_head = NULL;
	if (h != NULL)
	{
		while (current_node != NULL)
		{
			check_loop = add_head;
			while (check_loop != NULL)
			{
				if (current_node == check_loop->ptr)
				{
					free(current_node);
					free_list(add_head);
					 *h = NULL;
					return (count);
				}
				check_loop = check_loop->next;
			}
			remove_node = current_node;
			if (add_node(&add_head, current_node) == NULL)
			{
				free_list(add_head);
				exit(98);
			}
			current_node = current_node->next;
			free(remove_node);
			count++;
		}
		free_list(add_head);
		*h = NULL;
	}
	return (count);
}
