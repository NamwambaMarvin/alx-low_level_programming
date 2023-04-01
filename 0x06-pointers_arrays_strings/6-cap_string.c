#include "main.h"
/**
 * cap_string - Capitalises each word of the word
 * @str: String whose words are to be capitalised
 * Return: Character with capitalise words
 */
char *cap_string(char *str)
{
	int i = 0, j = 0;

	char c[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}', '\n', '\t'};

	int array_length = sizeof(c) / sizeof(c[0]);

	while (str[i] != '\0')
	{
		for (j = 0; j < array_length; j++)
		{
			if (i == 0 && (str[0] >= 'a' && str[0] <= 'z'))
			{
				str[i] -= 32;
			}
			else if (str[i] == c[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
