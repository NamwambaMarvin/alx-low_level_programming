#include "main.h"
#include <stdlib.h>
/**
 * _strchr - Detects the first occurrence of a string
 * @s: String to be searched
 * @c: Character to be detected
 * Return: c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
