#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Will Prints the minimum number of coins to make change.
 * @argc: The Number of arguments.
 * @argv: The Array of arguments.
 *
 * Return: Always 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int amount, coin_index, num_coins;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	num_coins = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (coin_index = 0; coin_index < 5 && amount >= 0; coin_index++)
	{
		while (amount >= coins[coin_index])
		{
			num_coins++;
			amount -= coins[coin_index];
		}
	}

	printf("%d\n", num_coins);
	return (0);
}
