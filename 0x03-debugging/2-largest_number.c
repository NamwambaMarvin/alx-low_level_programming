#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = 0;

	int index;

	int all[3] = {a, b, c};

	for (index = 0; index <= 3; index++)
	{
		if (all[index] > largest)
		{
			largest = all[index];
		}
	}
	return (largest);
}
