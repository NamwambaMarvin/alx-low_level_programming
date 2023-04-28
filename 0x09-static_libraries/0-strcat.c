#include "main.h"
/**
 *_strcat - Concatenates two strings
 *@dest: Concatenated stings
 *@src: String to be appended
 *Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
