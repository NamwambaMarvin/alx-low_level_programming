#include "main.h"
#include <string.h>
/**
 * _strcpy - copoiies string to the buffer
 * @dest: Final destination od=f the copied string
 * @scr: Source of thee string
 * Return: destination of copied string
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (*dest);
}
