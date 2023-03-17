#include <stdio.h>
/**
 * main - Entry point of our main function
 * Return: returns integer zero
 */
int main(void)
{
	char m;

	int n;

	long int o;

	long long int x;

	float p;

	printf("Size of a char: %d bytes(s)",sizeof(m));
	printf("Size of an int: %d bytes(s)",sizeof(n));
	printf("Size of a long int: %d bytes(s)",sizeof(o));
	printf("Size of a long long int: %d bytes(s)",sizeof(x));
	printf("Size of a float: %d bytes(s)",sizeof(p));
	return (0);
}

