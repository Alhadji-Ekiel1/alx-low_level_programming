#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int is_word, char_count, word_count;

	is_word = 0;
	word_count = 0;

	for (char_count = 0; s[char_count] != '\0'; char_count++)
	{
		if (s[char_count] == ' ')
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, word_index = 0, str_len = 0, num_words, char_count = 0, start, end;

	while (*(str + str_len))
		str_len++;
	num_words = count_word(str);
	if (num_words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= str_len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (char_count)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (char_count + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[word_index] = tmp - char_count;
				word_index++;
				char_count = 0;
			}
		}
		else if (char_count++ == 0)
			start = i;
	}

	matrix[word_index] = NULL;

	return (matrix);
}
