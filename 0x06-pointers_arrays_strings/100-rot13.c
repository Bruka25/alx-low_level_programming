#include "main.h"

/**
 *rot13 - prints encoded string using rot13
 *
 *@str: String to be encoded
 *
 *Return: Encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char beta[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; str[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = beta[j];
				boolean = 1;
			}
		}
	}
	return (str);
}
