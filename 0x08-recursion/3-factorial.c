#include "main.h"

/**
 * factorial - functions that calculates the factorial of a given number.
 * @n: The number to be used for which the factorial is to be calculated.
 * Return: The the value of the factorial of the given number.
 */
int factorial(int n)
{
	if (n < 0) /* If n is negative, return -1 */
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1)); /* Recursion is cal */
}
