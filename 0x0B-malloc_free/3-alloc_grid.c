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
	int w, h;
	int w1, h1;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (!array)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		array[h] = (int *)malloc(sizeof(int) * width);
		if (!array[h])
		{
			for (w = 0; w < h; w++)
			{
				free(array[w]);
			}
			free(array);
			return (NULL);
		}
	}
	for (h1 = 0; h1 < height; h1++)
	{
		for (w1 = 0; w1 < width; w1++)
		{
			array[h1][w1] = 0;
		}
	}
	return (array);
}
