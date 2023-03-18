#include <stdio.h>
/**
 * main - entry point of any c program
 * Return: returns an integer
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
