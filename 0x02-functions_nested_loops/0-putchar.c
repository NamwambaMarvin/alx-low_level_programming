#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * main - entry point of the program
 * Return: - Always 0 (SUCCESS)
 */
int main(void)
{
	char mycharacter[] = "_putchar\n";
	
	int i;

	for (i = 0; i < strlen(mycharacter); ++i)
	{
		_putchar(mycharacter[i]);
	}

	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
