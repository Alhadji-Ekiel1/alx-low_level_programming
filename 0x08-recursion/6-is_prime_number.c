#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, if not 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Calcs if a number is prime.
 * @n: number to evaluate.
 * @j: Iterator for checking divisibility.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
