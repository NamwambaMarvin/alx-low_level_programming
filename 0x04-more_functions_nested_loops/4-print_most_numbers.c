#include "main.h"
/**
 * print_most_numbers -Prints numbers apart from 2 and 4
 */
void print_most_numbers(void)
{
	int index;

	for (index = 0; index < 10; i++)
	{
		if ((index == 2) || (index == 4))
		{
			continue;
		}
		_putchar((index % 10) + '0');
	}
	_putchar('\n');
}
