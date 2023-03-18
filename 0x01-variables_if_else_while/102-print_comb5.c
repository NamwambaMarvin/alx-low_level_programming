#include <stdio.h>
/**
 * main - Entry point pf the program
 * Return: always 0
 */
int main(void)
{
	int Fnum;

	int Snum;

	int Tnum;

	int Ftnum;

	for (Fnum = 0; Fnum < 10; ++Fnum)
	{
		for (Snum = 0; Snum < 9; ++Snum)
		{
			for (Tnum = 0; Tnum < 10; ++Tnum)
			{
				for (Ftnum = Snum + 1; Ftnum < 10; ++Ftnum)
				{
					putchar(Fnum + '0');
					putchar(Snum + '0');
					putchar(' ');
					putchar(Tnum + '0');
					putchar(Ftnum + '0');
					if (Fnum == 9 && Snum == 8 && Tnum == 9 && Ftnum == 9)
					{
						continue;
					};
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
