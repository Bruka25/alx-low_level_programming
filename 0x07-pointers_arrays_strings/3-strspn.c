#include "main.h"

/**
 *_strspn - Gets the length of a prefix substring
 *
 *@s: String to be manipulated
 *@accept: Bytes to compare with
 *
 *Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0' && s[a] != accept[b])
			b++;
		if (accept[b] == '\0')
			return (a);
		a++;
	}
	return (a);
}
