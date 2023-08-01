#include "main.h"

/**
 * _isdigit -standard c library checks for a digit btw '0' and '9'
 * @c: digit to be checked
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
