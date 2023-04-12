#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array and initialize it to first char
 * @size: - Size of the array
 * @c: Initalialization charcater
 * Return: Pointer to array or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = void *malloc(sizeof(c) * size);
	if (!array)
	{
		return (NULL);
	}
	array[0] = c;
	return (array);
}
