#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints the character c to stdout
 * @c:The character to print
 *
 * Return: (success) 1. On error, -1(error) and errno is set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

