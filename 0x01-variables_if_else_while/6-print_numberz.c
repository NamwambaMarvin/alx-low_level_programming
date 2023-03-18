#include <stdio.h>
/**
 * main - Entry point of the fnction
 * Return: final output of the function
 */
int main(void)
{
	int link;

	for (link = 0; link <= 10; ++link)
	{
		putchar('0' + link);
	};
	putchar('\n');
	return (0);
}
