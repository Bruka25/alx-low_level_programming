#include "main.h"

/**
  * _abs - Computes the absolute value of a given number.
  * @i: The number to be computed.
  *
  * Return: Absolute value which is positive or zero.
  */
int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;

		return (abs_val);
	}

	return (i);
}
