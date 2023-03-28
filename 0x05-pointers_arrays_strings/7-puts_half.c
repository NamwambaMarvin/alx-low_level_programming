#include "main.h"
#include <string.h>
/**
 * puts_half - Prints half characters of a string
 * @str: String under test
 * Return: Nothing
 */
void puts_half(char *str)
{
	int string_length = strlen(str);

	int  half_length = (string_length - 1) / 2;

	int i;

	if (string_length % 2 == 0)
	{
		for (i = 0; i < half_length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	} else
	{
		for (i = half_length + 1; i <= string_length; i++)
		{
			_putchar(str[i]);
		}
	}
}
