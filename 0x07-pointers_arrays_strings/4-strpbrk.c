#include "main.h"
#include <string.h>
/**
 * _strpbrk - Seraches a string for any set oof bytes
 * @s: String to be passed
 * @accept: set of bytes to be accepted
 * Return: Pointer to the byte s and NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s1);
		}
		s++;
	}
	return (NULL);
}
