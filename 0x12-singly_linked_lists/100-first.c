#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 * print_before_main - Print statement running main
 *
 *Return: Void
 */

void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
