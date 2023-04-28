#include "main.h"
/**
 * _islower - Determines whether the letter is lcase
 * @c: Character's integer value under test
 * Return: no return on void function
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	return (0);
}
