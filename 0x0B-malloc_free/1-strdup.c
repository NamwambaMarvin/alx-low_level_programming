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

	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dupstring = (void *)malloc((sizeof(char) * len) + 1);
	if (!dupstring)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dupstring[i] = str[i];
	}
	return (dupstring);
}
