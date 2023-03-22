#include "main.h"
/**
 * print_last_digit - prints the last igit if a function
 * @value_under_test: value that is parsed into the function
 * Return: Returns final value of te function
 */
int print_last_digit(int value_under_test)
{
	int lastdigit;

	lastdigit = value_under_test % 10;

	return (lastdigit);
}
