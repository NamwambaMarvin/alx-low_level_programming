#include "main.h"
/**
 * print_numbers - Function to print numbers
 */
void print_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; ++i)
	{
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
