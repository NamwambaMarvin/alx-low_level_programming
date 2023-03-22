#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - Prints the first n numbers
 * @n: - Stsrting number
 * Return: Returns the final value of the function
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			++n;
		}
	} else
	{
		while (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			--n;
		}
	}
}
