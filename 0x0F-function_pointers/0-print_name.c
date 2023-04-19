#include "function_pointers.h"
/**
 * print_name - Write a function that prints a name.
 * @name: Name of the person
 * @f: Function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
