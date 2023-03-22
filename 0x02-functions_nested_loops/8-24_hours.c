#include "main.h"
/**
 * jack_bauer - This is the timer function
 * Return: Returns the final value of thee function
 */
void jack_bauer(void)
{
	int first_two;

	int last_two;

	for (first_two = 0; first_two < 24; ++first_two)
	{
		for (last_two = 0; last_two < 60; ++last_two)
		{
			_putchar(first_two / 10);
			_putchar(first_two % 10);
			_putchar(':');
			_putchar(last_two / 10);
			_putchar(last_two % 10);
		}
	}
}
