#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the input string.
 * @accept: Pointer to the substring containing accepted characters.
 *
 * Return: The number of bytes in d initial segment of 's'
 * which consist only of characters from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}

	return (i);
}
