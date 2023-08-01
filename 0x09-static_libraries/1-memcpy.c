#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: A pointer to destination memory
 * @src: A pointer to source memory (data to be copied)
 * @n: number of bytes to be copied from src to dest
 *
 * Return: Pointer to the destination memory (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
