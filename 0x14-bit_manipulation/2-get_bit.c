#include "main.h"
/**
 * get_bit - Gets bit at given index
 * @n: Number
 * @index: Index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
			return ((n%2) ? 1 : 0);
		n /= 2;
		i++;
	}
	if ((index > 1) && index < 63)
	{
		return (0);
	}
	return (-1);
}
