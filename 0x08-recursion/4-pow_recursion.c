#include "main.h"

/**
 * _pow_recursion - Calculates & returns the value of x ^ to the power of y.
 * @x: The base value(value to be raised).
 * @y: The exponent value (power value).
 * Return: The result(of x ^ to the power of y).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	/* condition case: If y is 0, then x ^ to the power of 0 is 1. */
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
