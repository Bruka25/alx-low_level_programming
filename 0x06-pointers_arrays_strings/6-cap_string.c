
#include "main.h"

/**
 *cap_string - capitalizes a string
 *
 *@str: The word to be capitalized
 *
 *Return: The capitalized string
 */

char *cap_string(char *str)
{
	int i, c;
	int t;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, t = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			t = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[i])
				t = 1;
		}

		if (t)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				t = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				t = 0;
			else if (str[i] > 47 && str[i] < 58)
				t = 0;
		}
	}
	return (str);
}
