#include "main.h"
/**
 * times_table - prints the 9x9 table
 * Return: returns final value
 */
void times_table(void)
{
	int multiplier = 0;

	int i, j, holder;

	for (i = 0; i < 10; ++i)
	{
		_putchar('0');
		for (j = 1; j < 10; ++j)
		{
			holder = multiplier * j;
			_putchar(',');
			_putchar(' ');
			if (holder <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((holder / 10) + '0')
			}
			_putchar((holder % 10) + '0');
		}
		_putchar('\n');
		++multiplier;
	}
}
