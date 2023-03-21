#include "main.h"

/**
 * _isalpha - Function that checks for alpha numeric
 * @c: integer passed as parameter to the function
 * Return: Returns final value of the function
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
