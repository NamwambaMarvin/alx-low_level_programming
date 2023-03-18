#include <stdio.h>
/**
 * main - Entry point of our program
 * Return: - Always 0
 */
int main(void)
{
	int Fnumber;

	int Snumber;

	int Tnumber;

	for (Fnumber = 0; Fnumber < 8; ++Fnumber)
	{
		for (Snumber = Fnumber + 1; Snumber < 9; ++Snumber)
		{
			for (Tnumber = Snumber + 1; Tnumber < 10; ++Tnumber)
			{
				putchar(Fnumber + '0');
				putchar(Snumber + '0');
				putchar(Tnumber + '0');
				if (Fnumber == 7 && Snumber == 8 && Tnumber == 9)
				{
					continue;
				};
				putchar(',');
				putchar(' ');
			};
		};
	};
	putchar('\n');
	return (0);
}
