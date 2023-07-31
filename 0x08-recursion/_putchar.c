#include <unistd.h>

/**
 * @c: print character c
 * _putchar - prints the chcter c to stdout
 
 *
 * Return: 1 On success.
 * On error, -1 is returned, and error is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
