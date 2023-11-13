#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search through
 * @accept: array of bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or return NULL if no bytes are found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int z;

	while (*s != '\0')
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (*s == accept[z])
				return (s);
		}
		s++;
	}
	return (0);
}
