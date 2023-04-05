#include "main.h"
/**
 * _puts_recursion - Prints characters with recursion
 * @s: Character to be printed out
 */
void _puts_recursion(char *s)
{
	char m = s;

	if (m > 'z')
	{
		return;
	}
	_putchar(s);
	_puts_recursion(s + 1);
}
