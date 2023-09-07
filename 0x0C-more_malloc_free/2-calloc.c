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
	char *array;
	unsigned int byte, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	byte = nmemb * size;
	array = malloc(byte);
	if (ar == NULL)
		return (NULL);
	while (i < byte)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
