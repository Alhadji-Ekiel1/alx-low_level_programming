#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to concatenate from src
 *
 * Return: pointer to the destination string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, m;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[k] = src[m];
		k++;
		m++;
	}
	dest[k] = '\0';

	return (dest);
}
