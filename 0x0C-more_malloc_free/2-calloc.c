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
	void *array;
	unsigned int byte, i;
	char *index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	byte = nmemb * size;
	array = malloc(byte);
	if (ar == NULL)
		return (NULL);
	index = array;

	while (i < byte)
	{
		index[i] = '\0';
		i++;
	}
	return (array);
}
