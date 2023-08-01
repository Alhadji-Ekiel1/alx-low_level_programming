#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments received.
 * @argc: The Number of arguments.
 * @argv: The Array of arguments.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}
