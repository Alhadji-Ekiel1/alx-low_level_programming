#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: the (string to be converted)
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int index, negative, num, length, found_digit, digit_value;

	index = 0;
	negative = 0;
	num = 0;
	length = 0;
	found_digit = 0;
	digit_value = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && found_digit == 0)
	{
		if (s[index] == '-')
			++negative;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit_value = s[index] - '0';
			if (negative % 2)
				digit_value = -digit_value;
			num = num * 10 + digit_value;
			found_digit = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			found_digit = 0;
		}
		index++;
	}

	if (found_digit == 0)
		return (0);

	return (num);
}

/**
 * main - multiplies two numbers
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: if 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, number1, number2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	result = number1 * number2;

	printf("%d\n", result);

	return (0);
}
