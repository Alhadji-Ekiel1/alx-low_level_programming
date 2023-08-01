#include "main.h"

/**
 * _strcat - stands for string concatenate, concatenates two strings
 * @dest: Pointer to destination string input value
 * @src: Pointer to string input value
 * Return: Pointer to the concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int n; /* Variable to track the index of 'dest' string */
	int m; /* Variable to track the index of 'src' string */

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}

	dest[n] = '\0'; /* Null-terminate the concatenated string */
	return (dest);
}
