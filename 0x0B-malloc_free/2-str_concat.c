#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two stringd
 * @s1: First string
 * @s2: Secong string
 * Return: pointer to concatencated string
 */
char *str_concat(char *s1, char *s2)
{
	char *newstring;

	unsigned int index, total_len;

	if (s1 == NULL)
	{
		s1 = "";
	} else if (s2 == NULL)
	{
		s2 = "";
	}
	total_len = strlen(s1) + strlen(s2);
	newstring = malloc((sizeof(char) * total_len) + 1);
	if (!newstring)
	{
		return (NULL);
	}
	for (index = 0; index < total_len; index++)
	{
		newstring[index] = s1[index];
		if (index == strlen(s1))
		{
			unsigned int s2len = 0;

			while (s2len < strlen(s2))
			{
				newstring[index++] = s2[s2len];
				s2len++;
			}
			break;
		}
	}
	return (newstring);
}
