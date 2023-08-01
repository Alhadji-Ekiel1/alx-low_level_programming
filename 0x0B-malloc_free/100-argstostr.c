#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate command-line arguments to a string
 * @ac: number of command-line arguments
 * @av: double pointer to the array of command-line arguments
 * Return: pointer to the concatenated string, NULL if fail
 */
char *argstostr(int ac, char **av)
{
	int i, j, str_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str_len++;
	}

	str_len += ac;

	str = malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);

	int pos = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos] = av[i][j];
			pos++;
		}
		if (str[pos] == '\0')
		{
			str[pos++] = '\n';
		}
	}
	return (str);
}
