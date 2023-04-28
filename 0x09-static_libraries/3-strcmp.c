#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: - First string
 * @s2: - Second String
 * Return: Comparison between two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
