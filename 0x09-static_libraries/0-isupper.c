#include "main.h"
/**
 * _isupper -functions check for uppercase letters(A-Z)
 * @c: character to be checked
 *Return: 1 if uppercase or 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	return (0);
}
