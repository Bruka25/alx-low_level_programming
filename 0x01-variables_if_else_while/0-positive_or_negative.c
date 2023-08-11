#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go here */

/**
 * main - Entry point of the program
 *
 * Description: Prints whether the randomly generated number is negative,
 *              zero, or positive along with its value.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
