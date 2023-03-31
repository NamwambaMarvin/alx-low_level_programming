#include "main.h"
/**
 * string_toupper - converts string to upper case
 * @str: - ting to be converted
 * Return: Converted character too upper case
 */
char *string_toupper(char *str)
{
	int index;

	int length = sizeof(str) / sizeof(char);

	for (index = 0; index < length; index++)
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] -= 32;
		}
	}
	return (str);
}
