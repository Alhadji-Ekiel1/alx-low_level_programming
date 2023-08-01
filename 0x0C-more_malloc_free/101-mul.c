#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

void errors(void)
{
	printf("Error\n");
	exit(98);
}

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, total_length, carry, first_digit, second_digit, *result, has_value = 0;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	total_length = length1 + length2 + 1;
	result = malloc(sizeof(int) * total_length);
	if (!result)
		return (1);
	for (int i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (int i = length1 - 1; i >= 0; i--)
	{
		first_digit = s1[i] - '0';
		carry = 0;
		for (int j = _strlen(s2) - 1; j >= 0; j--)
		{
			second_digit = s2[j] - '0';
			carry += result[i + j + 1] + (first_digit * second_digit);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i + length2 + 1] += carry;
	}
	for (int i = 0; i < total_length - 1; i++)
	{
		if (result[i])
			has_value = 1;
		if (has_value)
			_putchar(result[i] + '0');
	}
	if (!has_value)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
