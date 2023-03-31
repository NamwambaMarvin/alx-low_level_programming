#include "main.h"
/**
 * _strncat - Concatenates two strings at n bytes from dest
 * @dest: String we are appendimg too
 * @src: - String that we are appending
 * @n: - Number of bytes from dest
 * Return: Pointer to Destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	int nchars;

	nchars = n / sizeof(char);

	while (dest[j] != '\0')
	{
		j++;
	}

	while (i < nchars && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
