#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 *add_node - Adds a new node at the beginning of a list_t list
 *
 *@head: Pointer to pointer to the head node
 *@str: String to be duplicated in the list
 *
 *Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int i;

	i = 0;
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	while (str[i] != '\0')
		i++;
	add->len = i;
	add->next = *head;
	*head = add;
	return (*head);
}
