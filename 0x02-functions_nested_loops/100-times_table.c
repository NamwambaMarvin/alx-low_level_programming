#include "main.h"
/**
 * print_times_table - Description of the function
 * @n: - Parameter to be parsed
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 15 && n > 0)
	{
		for (i = 0; i < (n + 1); ++i)
		{
			_putchar('0');
			for (j = 1; j < (n + 1); ++j)
			{
				product = i * j;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				if (product < 9)
				{
					_putchar(' ');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	} else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
