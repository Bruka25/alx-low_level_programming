#include "lists.h"

/**
 *sum_dlistint - returns the sum of the data of doubly linked 
 *               list
 *
 *@head: Pointer to the head of the list
 *
 *Return: sum or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int add;
	dlistint_t *temp;

	temp = head;
	for (add = 0; temp; temp = temp->next)
		add += tmp->n;

	return (add);
}
