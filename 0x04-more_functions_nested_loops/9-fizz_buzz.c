#include "main.h"
#include <stdio.h>
/**
 * main - The fizz Buzz program
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int counter;

	for (counter = 1; counter < 101; counter++)
	{
		if ((counter % 3) == 0)
		{
			printf("Fizz ");
		} else if ((counter % 5) == 0)
		{
			printf("Buzz ");
		} else if (((counter % 3) == 0) && ((counter % 5) == 0))
		{
			printf("FizzBuzz ");
		} else
		{
			printf("%d ", counter);
		}
	}
	printf("\n");
	return (0);
}
