#include <stdio.h>
/**
 * main - Entry point of the function
 * Return: returns an integer
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		if (alpha == 'e')
		{
			continue;
		}
		else if (alpha == 'q')
		{
			continue;
		};
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
