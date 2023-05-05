#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	int bit;
	char t;
	unsigned int size = sizeof(unsigned long int) * 8;
	unsigned long long cover = (unsigned long long)
		1 << (sizeof(unsigned long int) * 8 - 1);

	for (bit = 0; bit < size; bit++)
	{
		t = (n & cover) ? '1' : '0';
		_putchar(bit);
		cover >>= 1;
	}
}
