#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	unsigned long int cover = (unsigned long int)1 << (sizeof(unsigned long int)*8 - 1);
	int bit = 0;

	while (cover != 0)
	{
		bit = (n & cover) == 0 ? 0 : 1;
		_putchar(bit + '0');
		cover >>= 1;
	}
}
