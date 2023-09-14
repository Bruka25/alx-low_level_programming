#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *print_strings - Prints strings followed by new line
 *
 *@separator:  String to be printed between the strings
 *@n: Number of strings passed to the function
 *
 *Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	char *word;
	unsigned int w;

	va_start(words, n);
	w = 0;
	while (w < n)
	{
		word = va_arg(words, char *);
		if (word != NULL)
			printf("%s", word);
		else
			printf("(nil)");
		if (w < n - 1 && separator != NULL)
			printf("%s", separator);
		w++;
	}
	printf("\n");
	va_end(words);
}
