#include "main.h"

int check_pal(char *s, int k, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks string for a palindrome.
 * @s: reverse string.
 *
 * Return: 1 if = palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns length of a string.
 * @s:length of String to be calculated.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Checks the characters for palindrome.
 * @s: check string.
 * @len: Length of the string.
 * @k: Iterator.
 * Return: 1 if the string is a palindrome, 0 if it is not.
 */
int check_pal(char *s, int k, int len)
{
	if (*(s + k) != *(s + len - 1))
		return (0);
	if (k >= len)
		return (1);
	return (check_pal(s, k + 1, len - 1));
}
