#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -Allocate memory for nmemb
 * @nmeb: Numbers of the arraay
 * @size - size of the array
 * Return: Pointer to th array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int index = 0, total_bytes;
	char *points_to_array;

	total_bytes = nmemb * size;
	if (!nmemb || !size)
	{
		return (NULL);
	}
	points_to_array = malloc(total_bytes);
	if (!points_to_array)
	{
		return (NULL);
	}
	while (total_bytes)
	{
		points_to_array[index] = 0;
		index++;
		total_bytes--;
	}
	return (points_to_array);
}
