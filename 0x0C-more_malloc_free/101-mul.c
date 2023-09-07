#include <stdio.h>
#include <stdlib.h>

/**
 * _digit - Checks if str has digits
 *
 * @argv: Pointer to the argument
 *
 * Return: return 0 if all digits, 1 if not all digits.
 */
int _digit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
	if (argv[i] >= '0' && argv[i] <= '9')
		i++;
	else
	return (1);
	}
	return (0);
}

/**
 * _atoi - converts a string to their Ascii value
 *
 * @str: pointer the string
 *
 * Return: value of Ascii
 */
int _atoi(char *str)
{
	int i, result;

	i = result = 0;
	while (str[i])
	{
	if (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
	}
	i++;
	}
	return (result);
}

/**
 * main - Where program executes
 *
 * @argc: Number of arguments
 * @argv: Pointer to the argument
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_digit(argv[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;
	printf("multiplication of args %d\n", mul);
	return (0);
}
