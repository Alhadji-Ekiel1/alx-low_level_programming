#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination where the string will be copied to.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int u = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}

	for (; u < j; u++)
	{
		dest[u] = src[u];
	}

	dest[j] = '\0';
	return (dest);
}
