#include "main.h"
/**
 * print_to_98 - Prints the first n numbers
 * @n: - Stsrting number
 * Return: Returns the final value of the function
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; --i)
		{
			_getchar(i + '0');
		}
	} else if (n < 98)
	{
		for (i = n; i < 99; ++i)
		{
			_getchar(i + '0');
		}
	}
}
