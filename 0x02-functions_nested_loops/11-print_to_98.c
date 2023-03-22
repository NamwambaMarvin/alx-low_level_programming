#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - Prints the first n numbers
 * @n: - Stsrting number
 * Return: Returns the final value of the function
 */
void print_to_98(int n)
{
	signed int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
			{
				printf("%d ", (i / 10));
			}
			else
			{
				printf("%d ", (i / 10));
				printf("%d ",(abs(i) % 10));
			}
		}
	} else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d ", (i / 10));
			printf("%d ", (i % 10));
		}
	}
}
