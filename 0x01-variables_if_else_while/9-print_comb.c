#include <stdio.h>
/**
 * main -Entry point of the program
 * Return:  Final value returned by the funcction
 */
int main(void)
{
	int comb;

	for (comb = 0; comb < 10; ++comb)
	{
		putchar(comb + '0');
		if (comb == 9)
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		};
	};
	putchar('\n');
	return (0);
}
