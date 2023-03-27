#include "main.h"
#include <string.h>
/**
 * print_rev - Prints a string in reverse form
 * @s: String to be reversed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int length;

	for (length = strlen(s); length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
