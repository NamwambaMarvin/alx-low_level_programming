#include "main.h"
/**
 * print_diagsums - Prints sums of square diagonals of integers
 * @a: Array to be passed
 * @size: Size of the square diagonals
 */
void print_diagsums(int *a, int size)
{
	int i, j, *total = 0, *total_b = 0;

	for (i = 0; i < size; i++)
	{
		total += a[i][i];
	}
	_putchar(total + '0');
	_putchar(',');
	_putchar(' ');
	for (j = size; j >= 0; j--)
	{
		total_b += a[j][j];
	}
	_putchar(total_b + '0');
}
