#include "main.h"
/**
 * _isdigit - Entry point of the program
 * @c: - Digit to be tested
 * Return: Returns final value of a function
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
