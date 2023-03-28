#include "main.h"
#include <stdio.h>
/**
 * print_array - oritns n elements of an array
 * @a: the array containing aelents
 * @n: Number of elements
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int index;

	while (n > 0)
	{
		printf("%d", a[0]);
		for (index = 1; index < n; index++)
		{
			printf(", %d", a[index]);
		}
		break;
	}
	printf("\n");
}
