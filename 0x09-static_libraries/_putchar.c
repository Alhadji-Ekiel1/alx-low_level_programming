#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: character to be printed
 * Return: 1 On success.
 * On error, -1 is returned, and error is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
