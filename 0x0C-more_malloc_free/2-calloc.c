#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Allocates memory for an array
 *
 *@nmemb: Members of an array
 *@size: Size of an array
 *
 *Return: Void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;
	unsigned int byte;

	if (nmemb == 0 || size == 0)
		return (NULL);
	byte = size * nmemb;
	array = malloc(byte);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb ; i++)
		array[i] = 0;
	return (array);
}
