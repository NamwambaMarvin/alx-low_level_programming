#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last igit if a function
 * @value_under_test: value that is parsed into the function
 * Return: Returns final value of te function
 */
int print_last_digit(int value_under_test)
{
	int lastdigit;

	if (value_under_test < 0)
	{
		value_under_test *= -1;
	}
	lastdigit = value_under_test % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
