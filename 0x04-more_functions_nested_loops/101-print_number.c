#include "main.h"
/**
 * print_number - Prints a number
 * @n: number to be printed
 */
void print_number(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}
