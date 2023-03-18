#include <stdio.h>
/**
 * main - Entry point of the fnction
 * Return: final output of the function
 */
int main(void)
{
	int link;

	for (link = 0; link < 10; ++link)
	{
		if (link == ':')
		{
			continue;
		}
		putchar(link + '0');
	};
	putchar('\n');
	return (0);
}
