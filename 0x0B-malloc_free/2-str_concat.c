#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two input strings
 * @s1: input string one to concatenate
 * @s2: input string two to concatenate
 * Return: concatenated string (s1 + s2)
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len_s1, len_s2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = len_s2 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (result == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}

	result[i] = '\0';
	return (result);
}
