#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints the first n numbers
 * @n: - Stsrting number
 * Return: Returns the final value of the function
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	} else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
}
