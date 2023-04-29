#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocates grid and assigns it to 0
 * @height: Height of the grid
 * @width: Width of the grid
 * Return: Pointer to the new 2d array
 */
int **alloc_grid(int width, int height)
{
	int w, h, w1, h1, **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
	{
		free(array);
		return (NULL);
	}
	for (h = 1; h <= height; h++)
	{
		array[h] = malloc(sizeof(int) * width);
		if (!array[h])
		{
			for (w = h; w >= 0; w++)
			{
				free(array[w]);
			}
			free(array);
			return (NULL);
		}
	}
	for (h1 = 1; h1 <= height; h1++)
	{
		for (w1 = 1; w1 <= width; h1++)
		{
			array[h1][w1] = 0;
		}
	}
	return (array);
}
