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

	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dupstring = malloc(sizeof(str) * len);
	while (len)
	{
		*dupstring = *str;
		dupstring++;
		str++;
		len--;
	}
	return (dupstring);
}
