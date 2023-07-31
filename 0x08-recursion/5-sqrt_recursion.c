#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root(0-9) of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: The natural square root of the number.
 *
 */
int _sqrt_recursion(int n);

int find_sqrt(int n, int i, int j);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}

	if (n == 0 || n == 1) /* COndition If n is 0 or 1, square root is n. */
	{
		return n;
	}

	return find_sqrt(n, 1, n);
}

/**
 * find_sqrt - to find the square root.
 * @n: The number for which the square root is to be calculated.
 * @i: The starting .
 * @j: The ending value.
 * Return: The square root of the number.
 */
int find_sqrt(int n, int i, int j)
{
	int mid = (i + j) / 2;

	if (i > j) /* if invalid search range, return -1 (no natural square root). */
	{
		return -1;
	}

	if (mid * mid == n) /* If square of the middle value = to n, square root. */
	{
		return mid;
	}
	else if (mid * mid > n) /* If the square of the middle value > n. */
	{
		return find_sqrt(n, i, mid - 1);
	}
	else /* If the square of the middle value < n, */
	{
		return find_sqrt(n, mid + 1, j);
	}
}
