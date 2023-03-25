#include "main.h"
/**
 * print_triangle(int size); - Print triangles
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int space;

	int columns;

	int hash;

	for (columns = 0; columns < size; columns++)
	{
		for (space = 1; space < size - columns; space++)
		{
			_putchar(' ');
		}
		for (hash = 0; hash <= columns; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
