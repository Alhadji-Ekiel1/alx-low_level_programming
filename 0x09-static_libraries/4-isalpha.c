#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character(c) to be checked.
 *
 * Return: 1 if character is a letter, or 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
