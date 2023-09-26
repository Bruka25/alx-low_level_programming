#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint_safe - Function that prints a linked list in safe manner
 *
 *@head: Pointer to the head of the list
 *
 *Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node;
	size_t node_num;
	const listint_t *temp;

	current_node = head;
	if (current_node == NULL)
		exit(98);

	node_num = 0;

	while (current_node != NULL)
	{
		temp = current_node;
		current_node = current_node->next;
		node_num++;
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp < current_node)
		{
			printf("-> [%p] %d\n", (void *)current_node, current_node->n);
			break;
		}
	}

	return (node_num);
}
