#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Memory area to fill.
 * @b: Character to copy.
 * @n: Number of times b is copied.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}

/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocated_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocated_ptr = malloc(size * nmemb);

	if (allocated_ptr == NULL)
		return (NULL);

	_memset(allocated_ptr, 0, nmemb * size);

	return (allocated_ptr);
}
