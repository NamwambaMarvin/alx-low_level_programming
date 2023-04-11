#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds two postive integes
 * @argc: Number of arguments
 * @argv: Arguments passed to the program
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int result = 0, i = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while ((argc + 1) >= i)
	{
		if ((*argv[i] > 0 && *argv[i] < 48) || (*argv[i] > 58 && *argv[i] < 127))
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
	return (1);
}
