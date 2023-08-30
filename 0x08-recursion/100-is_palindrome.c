#include "main.h"

/**
 *is_palindrome - Checks whether a given string is palindrome or not
 *
 *@s: The string
 *
 *Return: 0 if the string is palindrome or 1 if not
 */

int is_palindrome(char *s)
{
	int len = str_length(s);
	int count = 0;

	return (checker(s, len - 1, count));
}


/**
 * str_length - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int str_length(char *s)
{
	if (*s)
	{
		s++;
		return (1 + str_length(s));
	}
	return (0);
}

/**
 * check - ckecks is_palindrome
 * @str: the string
 * @len: length of string
 * @count: counts the recursion
 * Return: 1 if it is palindrome or 0 if not
 */
int check(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (check(str, len - 1, count + 1));
	return (0);
}
