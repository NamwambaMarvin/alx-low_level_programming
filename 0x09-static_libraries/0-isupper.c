#include "main.h"
/**
 * _isupper - Function to determine caase oof the letter
 * @c: - letter inform of a character to be parsed to the function
 * Return: Final return value of the function
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
