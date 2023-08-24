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
	int i;

	while (str[i])
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
			{
				str[i] -= 13;
				break;
			}

			str[i] += 13;
			break;
		}

		i++;
	}

	return (str);
}
