#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints all arguments passed
 * @argc: Number of arguments passed
 * @argv: Arguments passed to program
 * Return: ALWAYS 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
