#include "variadic_functions.h"
/**
 * sum_them_all - Prints sum of all Parameters
 * @n: Number of arguments to be passed to the function
 * Return : Sum of all the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list numbers;
	int i, total = 0;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(numbers, int);
	}
	va_end(numbers);
	return (total);
}
