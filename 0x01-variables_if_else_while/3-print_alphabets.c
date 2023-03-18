#include <stdio.h>
/**
 * main - entry point of the program
 * Return: returns a zero
 */
int main(void)
{
	int lower;

	int upper;

	for (lower = 'a'; lower <= 'z'; ++lower)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; ++upper)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
