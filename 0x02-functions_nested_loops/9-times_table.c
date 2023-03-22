#include "main.h"
/**
 * times_table - prints the 9x9 table
 * Return: returns final value 
 */
void times_table(void)
{
	int rows;

	int column;

	for (column = 0; column < 10; ++column)
	{
		for ((row = column + 1); row < 10; ++row)
		{
			_putchar(column + '0');
			_putchar(row + '0');
			_putchar('\n');
		}
	}
}
