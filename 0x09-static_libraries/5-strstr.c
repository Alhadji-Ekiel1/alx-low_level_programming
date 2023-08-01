#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the input string.
 * @needle: Pointer to the substring to be found.
 *
 * Return: 0 (Success)Pointer to the first occurrence of the substring 'needle'
 * in the string 'haystack', or NULL(no match is found).
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *r = haystack;
		char *t = needle;

		while (*r == *t && *t != '\0')
		{
			r++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (0);
}
