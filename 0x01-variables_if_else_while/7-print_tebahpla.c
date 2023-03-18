#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: final return value of the function
 */
int main(void)
{
	int rev;

	for (rev = 'z'; rev >= 'a'; --rev)
	{
		putchar(rev);
	};
	putchar('\n');
	return (0);
}
