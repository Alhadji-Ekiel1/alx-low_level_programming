#include "main.h"

/**
 * _strlen_recursion - length of a string to be returned.
 * @s: Pointer to the string(length is to be calculated).
 * Return: length of string.
 * Description: function calcs the length of a string usx recursion.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	/* Termination case (If the end of string is reached), */
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
