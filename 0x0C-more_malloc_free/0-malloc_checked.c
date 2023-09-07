#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Allocates memory using malloc
 *
 *@b: The integer size to be allocated
 *
 *Return: Void
 */
void *malloc_checked(unsigned int b)
{
	if (b == 0)
	return (NULL);
	int *ptr;

	ptr = malloc(sizeof(int) * b);
	if (*ptr == NULL)
	exit(98);
	free(ptr);
	return (ptr);
}
