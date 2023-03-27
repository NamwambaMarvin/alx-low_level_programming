#include "main.h"
#include <string.h>
/**
 * _puts - Prints a tring to the stdout
 * @str: String to be printed
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar("\n");
}
