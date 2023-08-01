#include "main.h"

/**
 * _memset - basic implementation function
 * @s: a pointer to the starting address of memory to be filled
 * @b: the desired value used to fill the memory block
 * @n: the number of bytes to be changed (filled) with the specified value b
 *
 * Return: Pointer to the modified memory block (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}

	return (s);
}
