#include "main.h"
/**
 * print_alphabet - prints all aphabetical letters
 * Return: Always 0 (SUCCESS)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
