#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to newly allocated memory space(duplicates)
 * @str: String that will be copied
 * Return: Pointer to newly allocated space
 */
char *_strdup(char *str)
{
	char *dupstring;

	int len, index;

	len = strlen(str);
	dupstring = malloc(sizeof(str) * len);
	for (index = 0; index < len; index++)
	{
		*(dupstring++) = *(str++);
	}
	return (dupstring);
}
