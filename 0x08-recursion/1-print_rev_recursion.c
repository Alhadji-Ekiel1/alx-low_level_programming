#include "main.h"

/**
 * _print_rev_recursion - Prints(string in reverse).
 * @s: Pointer to the string which has to be printed and printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: Termination Case, return. */
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
