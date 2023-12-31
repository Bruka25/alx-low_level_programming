#include "function_pointers.h"

/**
 *print_name - A function that prints a name
 *
 *@name: The name
 *@f: Function pointer to returns char
 *
 *Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
