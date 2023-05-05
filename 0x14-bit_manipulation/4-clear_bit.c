#include "main.h"
/**
 * clear_bit - Sets bit at given index to 0
 * @n: Number wwhose bit is to be changed
 * @index: Index  of the bit
 * Return: 1 on success -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t size = sizeof(unsigned long int) * 8;

	if (index < size)
	{
		*n &= (~(1 << index));
		return (1);
	}
	return (-1);
}
