#include "main.h"
/**
 * _pow_recursion - Computes the number raised to a certain power
 * @x: Number
 * @y: Power
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	return (y < 0 ? -1 : y ? x * _pow_recursion(x, y - 1) : 1);
}
