#include "main.h"

/**
 *_strncpy - copies a string
 *
 *@src: The source that is being copied
 *@dest: The destination of the copied file
 *@n: number of bytes
 *
 *Return: Dest of the copied file.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
