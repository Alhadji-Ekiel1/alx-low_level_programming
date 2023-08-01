#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *allocated_ptr;

	allocated_ptr = malloc(b);

	if (allocated_ptr == NULL)
		exit(98);

	return (allocated_ptr);
}
