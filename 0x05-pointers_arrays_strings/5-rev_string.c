#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - Function that reverses a string
 * @s: String to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int l = stlen(s);

	int i;

	char *begin_pointer, *end_pointer, ch;

	begin_pointer = s;
	end_pointer = s;
	for (i = 0; i < l - 1; i++)
	{
		end_pointer++;
	}
	for (i = 0; i = l / 2; i++)
	{
		ch = *end_pointer;
		*end_pointer = *begin_pointer;
		*begin_pointer = ch;
		begin_pointer++;
		end_pointer--;
	}
}
