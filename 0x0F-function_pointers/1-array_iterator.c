#include "function_pointers.h"
/**
 * array_iterator - Iterates over an array
 * @size: Size of the array
 * @action: Pointer to the function you need to use
 * @array: Array to be iterated
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (size < 1 || !array || !action)
		return;
	for (index = 0; index < size; index++)
	{
		action(*(array)++);
	}
}
