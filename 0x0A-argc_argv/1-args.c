#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Returns the number of arguments
 * @argc: Number of arguments passed
 * @argv: Arguments to the function
 * Return: ALWAYS 0 SUCCESS
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", (argc - 1));
	return (0);
}
