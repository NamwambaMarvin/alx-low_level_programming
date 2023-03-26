#include <stdio.h>
/**
 * main - printd the first 50 fibonscci numbers
 * Return: aleays zero success
 */
int main(void)
{
	int f1 = 0, f2 = 1;

	int next_term = f1 + f2;

	int i, n = 50;

	printf("%d, %d", f1, f2);

	for (i = 3; i <= n; ++i)
	{
		printf(", %d", next_term);
		f1 = f2;
		f2 = next_term;
		next_term = f1 + f2;
	}
	return (0);
}
