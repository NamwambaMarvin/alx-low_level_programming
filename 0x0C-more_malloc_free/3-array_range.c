#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integer
 * @min: Minimum integer
 * @max: Maximum integer
 * Return: Pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *array_of_integer;

	int array_index = 0, range;

	range = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	array_of_integer = malloc(sizeof(int) * range);
	if (!array_of_integer)
	{
		return (NULL);
	}
	while (min <= max)
	{
		array_of_integer[array_index] = min;
		min++;
		array_index++;
	}
	return (array_of_integer);
}
