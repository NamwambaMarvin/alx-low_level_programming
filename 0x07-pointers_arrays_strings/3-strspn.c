#include "main.h"
#include <string.h>
/**
 *_strspn - Finds the first occurence of a character
 *@s: - Sting to be passed to the function
 *@accept: - Sub string to be passed for evaluation
 *Return: Retuns number of bytes in the initial segment s
 */
unsigned int _strspn(char *s, char *accept)
{
	int length_of_sub = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (length_of_sub);
	}
	while (*s && strchr(accept, *s++))
	{
		length_of_sub++;
	}
	return(length_of_sub);
}
