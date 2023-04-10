#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Multiplies 2 numbers
 * @argc: Number of arguments
 * @argv: Array of stings of arguments
 * Return: Alwayz 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int result = 1;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
