
#include "variadic_functions.h"
#include <stdarg.h>
#include <Stdlib.h>
#include <Stdio.h>

/**
 *print_numbers - Prints numbers followed by a new line
 *
 *@separator: String to be printed between numbers
 *@n: Number of integers passed to a function
 *
 *Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	i = 0;
	va_start(numbers, n);
	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(numbers);
}
