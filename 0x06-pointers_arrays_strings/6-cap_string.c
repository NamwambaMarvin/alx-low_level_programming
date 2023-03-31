#include "main.h"
/**
 * cap_string - Capitalises each word of the word
 * @str: String whose words are to be capitalised
 * Return: Character with capitalise words
 */
char *cap_string(char *str)
{
	int i = 0, j = 0;

	char *c[] = {' ',',',';','.','!','?','"','(',')','{','}'};

	int array_length = sizeof(c) / sizeof(c[0]);

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	while (str[i] != '\0')
	{
		for (j = 0; j < array_length; j++)
		{
			if (str[i] == c[j] || str[i] = '\t' || str[i] == '\n')
			{
				str[i + 1] -= 32;
			}
		}
	}
}
