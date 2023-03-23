#include "main.h"
/**
 * print_line - Prints specified number of lines to the console
 * @n: Desrired number of lines to be printed
 */
void print_line(int n)
{
	int index;

	if (n > 0)
	{
		for (index = 0; index <= n; index++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
