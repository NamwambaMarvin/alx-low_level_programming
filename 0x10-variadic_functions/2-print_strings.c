#include "variadic_functions.h"
/**
 * print_strings - Printsnumerst followed by a nrew line
 * @separator: string to be printed between strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prn;
	unsigned int i;

	va_start(prn, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(prn, char *));
		if (separator && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(prn);
}
