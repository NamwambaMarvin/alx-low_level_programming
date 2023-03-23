#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of any c program
 * Return: ALWAYS 0 (SUCCESS)
 */
int main(void)
{
	int Fmultiple = 3, Smultiple = 5;

	int sum;

	int limit = 1024;

	int node;

	for (node = 0; node < limit; node++)
	{
		if (((node % Fmultiple) || node % Smultiple) == 0)
		{
			sum += node;
		}
	}
	return (sum);
	printf("\n");
}
