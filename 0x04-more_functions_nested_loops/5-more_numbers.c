#include "main.h"
/**
 * more_numbers - Function to print up to 14
 */
void more_numbers(void)
{
	int px10, upto14;

	for (px10 = 0; px10 < 10; px10++)
	{
		for (upto14 = 0; upto14 < 15; upto14++)
		{
			if (upto14 > 9)
			{
				_putchar((upto14 / 10) + '0');
			}
			_putchar((upto14 % 10) + '0');
		}
		_putchar('\n');
	}
}
