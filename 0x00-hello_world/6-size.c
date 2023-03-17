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

	printf("Size of a char: %d bytes(s)\nSize of an int: %d bytes(s)\nSize of a long int: %d bytes(s)\nSize of a long long int: %d bytes(s)\nSize of a float: %d bytes(s)", sizeof(m), sizeof(n), sizeof(o), sizeof(x), sizeof(p));
	return (0);
}

