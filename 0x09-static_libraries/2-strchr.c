#include "main.h"

/**
  * _strchr - Locate the first occurrence of a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to be found in the string.
 * Return: Pointer to first occurrence o character 'c' in d string 's',
 * or NULL if not found (character).
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
