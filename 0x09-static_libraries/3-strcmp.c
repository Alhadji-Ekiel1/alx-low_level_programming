#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first input string.
 * @s2: Pointer to the second input string.
 *
 * Return: Difference between the first differing characters in s1 and s2,
 *         or 0 if both strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		k++;
	}

	return (0);
}
