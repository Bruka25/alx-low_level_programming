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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);

}
