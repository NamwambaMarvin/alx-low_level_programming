#include "main.h"
/**
 * print_to_98 - Prints the first n numbers
 * @n: - Stsrting number
 * Return: Returns the final value of the function
 */
void print_to_98(int n)
{
	int i, limit = 98;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((abs(i) % 10) + '0');
			}
		}
	} else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
}
