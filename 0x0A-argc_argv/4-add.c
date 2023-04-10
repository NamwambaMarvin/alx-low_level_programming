#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds two postive integes
 * @argc: Number of arguments
 * @argv: Ar`guments passed to the program
 * Return: Zero on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int result, i = 1;

	while (argc >= i)
	{
		if (!(*argv[i] >= '0' && *argv[i] <= '9'))
		{
			printf("Error\n");
			break;
			return (1);
		}
		else
		{
			result += abs(atoi(argv[i]));
		}
		i++;
		if (i == argc)
		{
			printf("%d\n", result);
			return (0);
		}
	}
	return (0);
}
