#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the input string.
 * @accept: Pointer to the substring containing accepted characters.
 *
 * Return: Pointer to the first occurrence of a character from 'accept'
 * in d string 's', or NULL (no match is found).
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
				return (s);
		}
		s++;
	}

	return ('\0');
}
