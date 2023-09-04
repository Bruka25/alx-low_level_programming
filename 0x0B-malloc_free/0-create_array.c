#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates arrays of chars
 *
 *@size: Size of the array
 *@c: Character in the array
 *
 *Return: NULL if size is 0, else pionter to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	if (size > 0)
	{
		ptr = malloc(size * sizeof(char));
		if (ptr == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (a = 0; a < size; a++)
		ptr[a] = c;
	return (ptr);
}
