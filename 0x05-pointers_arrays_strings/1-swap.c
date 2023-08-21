#include "main.h"

/**
 *swap_int -Swaps the value of two integers.
 *
 *@a: The first integer
 *
 *@b: The second integer
 *
 *return: void
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
