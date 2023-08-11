#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go here */

/**
 * main - Entry point of the program
 *
 * Description: Prints whether the randomly generated number is negative,
 *              zero, or positive.
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
		printf("n is negative\n");
	}
	else if (n == 0)
	{
		printf("n is zero\n");
	}
	else
	{
		printf("n is positive\n");
	}

	return (0);
}
