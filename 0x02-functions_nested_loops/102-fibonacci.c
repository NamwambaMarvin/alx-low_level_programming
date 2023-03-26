#include <stdio.h>
/**
 * main - printd the first 50 fibonscci numbers
 * Return: aleays zero success
 */
int main(void)
{
	int f2 = 1, f3 = 2;

	long int next_term = f2 + f3;

	int i, n = 50;

	printf("%d, %d", f2, f3);

	for (i = 4; i <= n; ++i)
	{
		printf(", %lu", next_term);
		f2 = f3;
		f3 = next_term;
		next_term = f2 + f3;
	}
	printf("\n");
	return (0);
}
