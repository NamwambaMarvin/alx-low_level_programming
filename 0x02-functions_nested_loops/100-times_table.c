#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Description of the function
 * @n: - Parameter to be parsed
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 15 && n > 0)
	{
		for (i = 0; i < (n + 1); ++i)
		{
			printf("0");
			for (j = 1; j < (n + 1); ++j)
			{
				product = i * j;
				printf(",");
				printf(" ");
				printf(" ");
				if (product < 10)
				{
					printf(" ");
					printf("%d", (product % 10));
				}
				else
				{
					printf("%d", (product / 10));
					printf("%d", (product % 10));
				}
			}
			prinf("\n");
		}
	} else if (n == 0)
	{
		printf("0");
		printf("\n");
	}
}
