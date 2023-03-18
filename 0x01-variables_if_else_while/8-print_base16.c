#include <stdio.h>
/**
 * main - Entry point of the function
 * Return: Final value that will be returned
 */
int main(void)
{
	int numbers;

	int letters;

	for (numbers = 0; numbers < 10; ++numbers)
	{
		putchar(numbers + '0');
	};
	for (letters = 'a'; letters <= 'f'; ++letters)
	{
		putchar(letters);
	};
	putchar('\n');
	return (0);
}
