#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	man(n);
}
/**
 * man - Manipulates the bit to wat we want
 * @m: Intergeer to be binarised
 */
void man(unsigned long int m)
{
	if (m < 1)
		return;
	man(m >> 1);
	(m & 1) ? _putchar('1') : _putchar('0');
}
