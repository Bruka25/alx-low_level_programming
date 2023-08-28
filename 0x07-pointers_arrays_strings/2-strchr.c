#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to be evaluated
 * @c: Character to be located
 *
 * Return: Pointer to the first occurrence of a char or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}

	return (NULL);
}
