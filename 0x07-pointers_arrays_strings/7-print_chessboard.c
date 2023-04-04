#include "main.h"
/**
 * print_chessboard - Prints a chess board
 * @a: Chess board position passed
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	int length_v = 8;

	int length_h = sizeof(a[0]) / sizeof(a[0][0]);

	for (i = 0; i < length_v; i++)
	{
		for (j = 0; j < length_h; j++)
		{
			_putchar(a[i][j]);
		}
	}
}
