#include "main.h"

/**
 * rot13 - encodes a string using ROT13 cipher
 *
 * @str: String to be encoded
 *
 * Return: Encoded string
 */

char *rot13(char *str)
{
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
		    (str[i] >= 'A' && str[i] <= 'Z'))
		{
			int shift = (str[i] >= 'a' && str[i] <= 'z') ? 'a' : 'A';

			if ((str[i] - shift) > 12)
				str[i] -= 13;
			else
				str[i] += 13;
		}
		i++;
	}
	return (str);
}
