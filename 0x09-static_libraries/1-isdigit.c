#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Entry point of the program
 * @c: - Digit to be tested
 * Return: Returns final value of a function
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
