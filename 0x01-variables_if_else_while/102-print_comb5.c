#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: always zero
 */
int main(void)
{
	int Fcomb, Scomb;

	for (Fcomb = 0; Fcomb < 99; ++Fcomb)
	{
		for (Scomb = Fcomb + 1; Scomb < 100; ++Scomb)
		{
			putchar((Fcomb / 10) + '0');
			putchar((Fcomb % 10) + '0');
			putchar(',');
			putchar(' ');
			putchar((Scomb / 10) + '0');
			putchar((Scomb % 10) + '0');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
};
