#include "main.h"
/**
 * print_to_98 - Prints the first n numbers
 * @n: - Stsrting number
 * Return: Returns the final value of the function
 */
void print_to_98(int n)
{
	int i, limit = 98;

	if (n > 98)
	{
		for (i = n; i > 97; --i)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	} else if (n < 98)
	{
		for (i = n; i < 99; ++i)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	} else
	{
		_putchar(limit);
	}
	_putchar('\n');
}
