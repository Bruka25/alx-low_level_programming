#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: string
 * Return: encoded string `str`
 */

char *leet(char *str)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char lit[] = "43071";

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (str[i] == subs[j])
				str[i] = lit[j / 2];
	}
	return (str);
}
