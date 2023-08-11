#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lastDigit(int n);

/**
 * main - Entry point of the program
 *
 * Description: Prints the last digit of a randomly generated number and
 *              provides information about it.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);
	lastD = lastDigit(n);

	if (lastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	}
	else if (lastD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastD);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
	}

	return (0);
}

/**
 * lastDigit - Returns the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The last digit of the number
 */
int lastDigit(int n)
{
	return (n % 10);
}
