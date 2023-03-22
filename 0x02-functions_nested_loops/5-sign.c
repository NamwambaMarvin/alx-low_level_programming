#include "main.h"
/**
 * print_sign - function to print the sign of an integer
 * @n: integer to be tested
 * Return: 0 || 1 (SUCCESS)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
