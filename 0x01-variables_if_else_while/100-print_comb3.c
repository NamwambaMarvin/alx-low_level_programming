#include <stdio.h>
/**
 * main - Entry point of our program
 * Return: - returns final value if the program
 */
int main(void)
{
	int firstNumber;

	int secondNumber;

	for (firstNumber = 0; firstNumber < 9; ++firstNumber)
	{
		for (secondNumber = firstNumber + 1; secondNumber < 10; ++secondNumber)
		{
			putchar(firstNumber + '0');
			putchar(secondNumber + '0');
			if (firstNumber == 8 && secondNumber == 9)
			{
				continue;
			};
			putchar(',');
			putchar(' ');
		};
	};
	putchar('\n');
	return (0);
}
