#include "main.h"
/**
 * reverse_array - Reverses the elements of an array
 * @a: - Array to be reversed
 * @n: - Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int index;

	for (index = n; index >= 0; index--)
	{
		_putchar(a[index] + '0');
	}
}
