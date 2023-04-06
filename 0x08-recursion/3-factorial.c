#include "main.h"
/**
 * factorial - Computes factoial of a number
 * @n: Number whose factorial is to be computed
 * Return: Factorial of a number
 */
int factorial(int n)
{
	return (n < 0 ? -1 : (n ? n * factorial(n - 1) : 1));
}
