#include "main.h"
#include <stdlib.h>

/**
 *_strdup - A function which returns a pointer to a newly allocated space
 *
 *@str: The string parameter
 *
 *Return: NULL if str is 0, or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *duplstr;
	unsigned int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	duplstr = malloc(i * sizeof(*duplstr) + 1);
	if (duplstr == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		duplstr[c] = str[c];
	duplstr[c] = '\0';

	return (duplstr);
}
