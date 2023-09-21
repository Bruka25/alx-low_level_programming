#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 *add_node_end - Add  a new node at the end of a list_t list
 *
 *@head: Pointer to the pointer of the head node
 *@str: The string to be duplicated inside the list
 *
 *Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int i;

	i = 0;
	if (*head == NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->next = NULL;
		*head = new_node;
		new_node->str = strdup(str);
		while (str[i] != '\0')
			i++;
		new_node->len = i;
	}
	else
	{
		temp = *head;
		while (i)
		{
			if (temp->next == NULL)
				break;
			temp = temp->next;
		}
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->next = NULL;
		temp->next = new_node;
		new_node->str = strdup(str);
		if (str == NULL)
		{       free(new_node);
			return (NULL);
		}
		while (str[i] != '\0')
			i++;
		new_node->len = i;
	}
	return (new_node);
}
