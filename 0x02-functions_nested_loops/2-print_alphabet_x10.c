#include "main.h"
/**
 * print_alphabetx10 - Print alphabets 10 times
 *
 * Return: Always zero (SUCCESS)
 */
void print_alphabet_x10(void)
{
	int counter;

	while (counter <= 10)
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
