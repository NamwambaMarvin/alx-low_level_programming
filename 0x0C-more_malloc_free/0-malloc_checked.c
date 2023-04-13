#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using the malloc function
 * @b: Size to be allocated
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ret;
	ret = malloc(b);
	return (ret);
}
