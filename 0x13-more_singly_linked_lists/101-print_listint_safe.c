#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_listint_safe - Function that prints a linked list in safe manner
 *
 *@head: Pointer to the head of the list
 *
 *Return: Number of nodes or exit 98 if error
 */

size_t print_listint_safe(const listint_t *head)
{
	listadd_t *new_head;
	listadd_t *check_loop;
	unsigned int node_num;

	node_num = 0;
	new_head = NULL;

	while (head != NULL)
	{
		check_loop = new_head;
		while (check_loop != NULL)
		{
			if (head == check_loop->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(new_head);
				return (node_num);
			}
			check_loop = check_loop->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		add_node(&new_head, head);
		head = head->next;
		node_num++;
	}
	free_list(new_head);
	return (node_num);
}


/**
 *add_node - Add a node to the linked list
 *
 *@head: Pointer to the pointer the head of the list
 *@ptr: The address of another list's node
 *
 *Return: Address of new node, NULL if it fails
 */

listadd_t *add_node(listadd_t **head, const listint_t *ptr)
{
	listadd_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free_list(*head);
		exit(98);
	}
	new_node->ptr = (void *)ptr;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 *free_list - Frees the linked list
 *
 *@head: Pointer to the head of the linked list
 *
 *Return: Void
 */

void free_list(listadd_t *head)
{
	listadd_t *list_free;

	while (head != NULL)
	{
		list_free = head;
		head = head->next;
		free(list_free);
	}
}
