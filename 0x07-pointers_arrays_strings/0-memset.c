#include "main.h"

/**
 *_memset - A function that fills memory with a constant byte
 *
 *@s: A character with a memory location
 *@b: A constant byte to fill
 *@n: The number of bytes
 *
 *Return: A pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
