#include "variadic_functions.h"
/**
 * print_numbers - Printsnumerst followed by a nrew line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prn;
	unsigned int i;

	va_start(prn, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prn, int));
		if (separator && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(prn);
}
