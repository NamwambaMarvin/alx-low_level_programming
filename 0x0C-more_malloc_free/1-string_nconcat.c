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
	unsigned int index, lens1, lens2, t_t, indexS2;
	char *newstring;

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	t_t = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (t_t >= lens2)
	{
		newstring = malloc(sizeof(char) * (lens1 + lens2 + 1));
		t_t = lens2;
	} else
	{
		newstring = malloc(sizeof(char) * (lens1 + n + 1));
	}
	if (!newstring)
		return (NULL);
	for (index = 0; index < lens1 ; index++)
	{
		newstring[index] = s1[index];
	}
	for (indexS2 = 0; indexS2 < t_t; indexS2++)
	{
		newstring[index++] = s2[indexS2];
	}
	newstring[index++] = '\0';
	return (newstring);
}
