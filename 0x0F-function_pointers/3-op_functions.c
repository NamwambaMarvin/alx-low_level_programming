#include "3-calc.h"
/**
 * op_add - Add two integers
 * @a: First integer
 * @b: Second integer
 * Return: Answer of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Add two integers
 * @a: First integer
 * @b: Second integer
 * Return: Answer of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Add two integers
 * @a: First integer
 * @b: Second integer
 * Return: Answer of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Add two integers
 * @a: First integer
 * @b: Second integer
 * Return: Answer of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Add two integers
 * @a: First integer
 * @b: Second integer
 * Return: Answer of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
