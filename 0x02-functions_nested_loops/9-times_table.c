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
		for (j = 0; j < 10; ++j)
		{
			holder = multiplier * j;
			if (holder > 9)
			{
				_putchar((holder / 10) + '0');
				_putchar((holder % 10) + '0');
			} else
			{
				_putchar(holder + '0');
			}
			if (j == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		++multiplier;
	}
}
