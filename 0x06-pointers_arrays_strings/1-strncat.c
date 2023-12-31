#include "main.h"

/**
 *_strncat - concatenates two string
 *
 *@src: The string to concatenate
 *@dest: String to be appended
 *@n: Bytes that the src use
 *
 *Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
