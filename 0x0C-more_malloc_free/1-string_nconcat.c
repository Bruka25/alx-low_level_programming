#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - Concatinates two strings
 *
 *@s1: The first string
 *@s2: The second string
 *@n: Size of the integer
 *
 *Return: Pointer to the concatinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (k = 0; s2[k] != '\0' && k < n; k++)
		;
	ptr = malloc(sizeof(char) * (i + k + 1));

	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ptr[j] = s1[j];
	for (k = 0; s2[k] != '\0' && k < n; k++)
		ptr[j++] = s2[k];
	ptr[j] = '\0';
	return (ptr);
}
