#include "main.h"
/**
 * print_alphabet_x10 - Print alphabets 10 times
 *
 * Return: Always zero (SUCCESS)
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter <= 9)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		++counter;
	}
}
