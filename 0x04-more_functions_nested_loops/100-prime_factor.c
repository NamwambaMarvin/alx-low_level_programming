#include "main.h"
#include <stdio.h>
/**
 * main - finrd the lsrgest prime factor of the given number
 * Return: max prime factor
 */
int main(void)
{
	long int n = 612852475143;

	long int diviser = 2, maxFactor;

	while (n != 0)
	{
		if (n % diviser != 0)
		{
			diviser = diviser + 1;
		} else
		{
			maxFactor = n;
			n = n / diviser;
			if (n == 1)
			{
				printf("%ld", maxFactor);
			}
			break;
		}
	}
	return (maxFactor);
	printf("\n");
}
