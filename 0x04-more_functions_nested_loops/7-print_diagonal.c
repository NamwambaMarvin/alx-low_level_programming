#include "main.h"
/**
 * print_diagonal - Prints diagonal lines in the terminal
 * @n: number of times diagonal is printed
 */
void print_diagonal(int n)
{
	int space;

	int number;

	if (n > 0)
	{
		for (number = 0; number < n; number++)
		{
			for (space = 0; space < number; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
