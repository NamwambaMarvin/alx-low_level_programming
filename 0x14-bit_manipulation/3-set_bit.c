#include "main.h"
/**
 * set_bit - sets bit a bit at given index to 1
 * @n: Number whose binary index is to be changed
 * @index: Index at which action is to happen
 * Return: 1 on sucess -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t i = sizeof(unsigned long int) * 8;
	bool v;

	if (index > i)
		return (-1);
	 v = (*n |= 1 << index);
	if (v)
		return (1);
	return (-1);
}
