#include "main.h"

/**
 *_memcpy - A function that copies a memory area
 *
 *@dest: The destination for the copied file
 *@src: The source of the memory
 *@n: The number of bytes
 *
 *Return: Pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
