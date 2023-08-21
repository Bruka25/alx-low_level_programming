#include "main.h"

/**
 *rev_string - reverses string
 *
 *@s: The string that is reversed
 *
 *Return: void
 */

void rev_string(char *s)
{
	int c, d;
	char r[1000];


	c = d = 0;
	while (s[c] != '\0')
	{
		r[c] = s[c];
		c++;
	}
	c--;
	while (c >= 0)
	{
		s[c] = r[d];
		c--;
		d++;
	}
	s[d++] = '\0';
}
