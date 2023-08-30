#include "main.h"

/**
 * findsrc - Find the last occurrence of a character or '*'
 * @s: The string to search within
 * @c: The character to find
 * @i: The current index in the string
 * @p: The previous index of the character found
 *
 * This function searches for the last occurrence of the character 'c'
 * or the character '*' in the string 's'. It recursively iterates
 * through the string, updating the previous index 'p' whenever a match
 * is found. If the end of the string is reached, the function returns
 * the index 'p' of the last occurrence of 'c' or '*'.
 *
 * Return: The index of the last occurrence of 'c' or '*'
 */

int findsrc(char *s, char c, int i, int p)
{
	if (*(s + i) == '\0')
		return (p + 1);
	else if (*(s + i) == c || *(s + i) == '*')
		p = i;

	return (findsrc(s, c, i + 1, p));
}

/**
 *wildcmp - Compares two strings
 *
 *@s1: The first string to be compared
 *@s2: The second string to be compared
 *
 *Return: 1 if the strings are identical or 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' && *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return (wildcmp(++s1, s2));
		else
		{
			return (wildcmp(s1, findsrc(s2, *(s1 + 1), 0, 0) + s2));
		}
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		else
		{
			return (wildcmp(s1 + findsrc(s1, *(s2 + 1), 0, 0), s2));
		}
	}

	return (0);

}
