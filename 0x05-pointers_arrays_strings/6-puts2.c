#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every other character of a string
 * @str: string where operation is to be pefomed
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
		i++;
	}
}
