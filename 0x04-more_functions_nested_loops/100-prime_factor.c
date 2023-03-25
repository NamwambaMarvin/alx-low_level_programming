#include "main.h"
#include <stdio.h>
/**
 * main - finrd the lsrgest prime factor of the given number
 * Return: Always (void)
 */
void main(void)
{
	long int number = 612852475143;

	long int n;

	long int diviser = 2, answer = 0, maxFactor;

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
				printf("%d",maxFactor)
			}
			answer = 1;
			break;
		}
	}
}
