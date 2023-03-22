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
		_putchar(multiplier + '0');
		for (j = 0; j < 10; ++j)
		{
			holder = multiplier * j;
			_putchar(holder + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
