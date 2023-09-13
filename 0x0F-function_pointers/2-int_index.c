#include "function_pointers.h"

/**
 *int_index - A function that searches for an integer
 *
 *@array: The array of integers
 *@size: Number of elements in an array
 *@cmp: A pointer to the function used to compare values
 *
 *Return: If size is <= 0 or no element matches -1, otherwise
 *        index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

				a++;
			}
		}
	}

	return (-1);
}
