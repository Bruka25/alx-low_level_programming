#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints a character to the standard output.
 * @c: The character to be printed.
 *
 * Return: On success, returns 1. On error, returns -1.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
