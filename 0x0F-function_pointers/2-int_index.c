#include "function_pointers.h"
/**
 * int_index - Searches for a number
 * @array: Array to be searched
 * @size: Size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: Found interger
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size < 1 || !array || !cmp)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
