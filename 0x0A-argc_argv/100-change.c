#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - calculates the minimum number of coins required to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	/* Declare variables */
	int amount, i, num_coins, coin_value;
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

	i = 0;
	do {
		coin_value = coins[i];
		while (amount >= coin_value)
		{
			num_coins++;
			amount -= coin_value;
		}
		i++;
	} while (i < 5 && amount > 0);

	printf("%d\n", num_coins);

	return (0);
}
