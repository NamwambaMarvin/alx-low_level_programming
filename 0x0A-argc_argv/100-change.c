#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Calculates change
 * @argc: - Change passed to the function
 * @argv: - Change digit
 * Return: 0 on success ,1 on failure
 */
int main(int argc, char *argv[])
{
	int total_coins = 0, i, cents, array_of_coins[] = {25, 10, 5, 2, 1};

	int len = sizeof(array_of_coins) / sizeof(array_of_coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < len; i++)
	{
		int coins = cents / array_of_coins[i];

		total_coins += coins;

		if (cents == 0)
		{
			printf("%d\n", total_coins);
			break;
			return (0);
		}
		cents %= array_of_coins[i];
		if (cents == 1)
		{
			total_coins += 1;
			printf("%d\n", total_coins);
			break;
			return (0);
		}
	}
	return (0);
}
