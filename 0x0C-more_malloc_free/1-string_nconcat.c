#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of byters of sting s2
 * Return: Cancatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, lens1, lens2, total_len;

	char *newstring;

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	total_len = lens1 + lens2;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	newstring = malloc(sizeof(char)*(lens1 + lens2) + 1);
	if (!newstring)
	{
		return (NULL);
	}
	for (index = 0; index <= total_len ; index++)
	{
		newstring[index] = s1[index];
		if (index == lens1)
		{
			int i = 0;
			if (n >= lens2)
			{
				while (s2[i] != '\0')
				{
					newstring[index++] = s2[i++];
				}
				newstring[index++] = '\0';
				break;
			}
			while (n)
			{
				newstring[index++] = s2[i++];
				n--;
			}
			newstring[index++] = '\0';
			break;
		}
	}
	return (newstring);
}
