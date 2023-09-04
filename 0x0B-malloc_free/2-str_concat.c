#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concatinates two strings
 *
 *@s1: The first string
 *@s2: The second string
 *Return: Pointer to the str or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	len = a + b;
	str = malloc((sizeof(char) * len) + 1);

	if (str == NULL)
		return (NULL);

	b = 0;

	while (c < len)
	{
		if (c <= a)
			str[c] = s1[a];

		if (c >= a)
		{
			str[c] = s2[b];
			b++;
		}

		c++;
	}

	str[c] = '\0';
	return (str);
}
