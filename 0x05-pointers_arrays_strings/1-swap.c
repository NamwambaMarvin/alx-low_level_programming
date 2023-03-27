#include "main.h"
/**
 * swap_int - Swaps two integers
 * @a: First integer
 * @b: Second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
