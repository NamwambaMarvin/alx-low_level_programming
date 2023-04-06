#include "main.h"
/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: Number whose square root is to be computed
 * Retun: Square root
 */
int _sqrt_recursion(int n)
{
	return (n ? n / _sqrt_recursion_wrapper(n, 2) : -1)
}
