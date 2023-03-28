#include "main.h"
#include <string.h>
/**
 * _strcpy - copoiies string to the buffer
 * @dest - final destination od=f the copied string
 * @scr - source of thee string
 * Return: destination of copied string
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (*dest);
}
