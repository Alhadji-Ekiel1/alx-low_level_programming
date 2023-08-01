#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check if the string contains only digits.
 * @str: The input string.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int check_num(char *str)
{
	unsigned int index;

	for (index = 0; index < strlen(str); index++)
	{
		if (!isdigit(str[index]))
		{
			return (0);
		}
	}

	return (1);
}

/**
 * main - Prints the sum of all valid numbers in the arguments.
 * @argc: The number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum); /* prints sum */

	return (0);
}
