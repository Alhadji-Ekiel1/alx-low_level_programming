#include "main.h"

/**
 * _strncpy - Copies a string up to a given number of characters.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Number of characters to copy.
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int f;

	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}

	return (dest);
}
