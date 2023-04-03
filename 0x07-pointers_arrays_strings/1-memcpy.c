#include "main.h"
/**
 *_memcpy - Copies characters of a buffer to the destination
 *@dest: Destination of the copied content
 *@src: Source of the copied content
 *@n: Number of bytes to be copied
 *Return: Pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pointer_to_dest = char *dest;

	char *pointer_to_src = char *src;

	if ((*pointer_to_dest != NULL) && (*pointer_to_src != NULL))
	{
		while (n)
		{
			/* Copies byte by byte */
			*(pointer_to_dest++) = *(pointer_to_src++);
			n--;
		}
	}
	return (dest);
}
