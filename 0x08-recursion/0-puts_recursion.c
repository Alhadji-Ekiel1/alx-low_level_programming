#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * @s: String(to be printed) from Pointer.
 *Return: 0 Sucess
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: End condition if reached, */
	{
		_putchar('\n'); /* print a new line. */
		return;
	}

	_putchar(*s); /* current character to be printed. */
	_puts_recursion(s + 1);
}
