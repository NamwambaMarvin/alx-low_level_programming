#include "main.h"
/**
 * _strncpy - Copies a specified string
 * @dest: Destinatiion of the copied string
 * @src: - Source of the copied string
 * @n: - number of bytes to cut
 * Return: opied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int node;

	for (node = 0; node < n && src[node] != '\0'; node++)
	{
		dest[node] = src[node];
	}
	for (; node < n; node++)
	{
		dest[node] = '\0';
	}
	return (dest);
}
