#include "main.h"
/**
 *_strlen_recursion - Returns legth of a string using recursion
 *@s: String whose length is to be determined
 *Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
