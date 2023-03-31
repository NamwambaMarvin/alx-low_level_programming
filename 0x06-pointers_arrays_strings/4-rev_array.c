#include "main.h"
/**
 * reverse_array - Reverses the elements of an array
 * @a: - Array to be reversed
 * @n: - Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int index, reve;

	n = n - 1;
	reve = 0;
	while (reve <= n)
	{
		index = a[reve];
		a[reve++] = a[n];
		a[n--] = index;
	}
}
