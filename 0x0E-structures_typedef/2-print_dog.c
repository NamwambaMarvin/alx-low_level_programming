#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the structure of dog
 * @d: Dog info
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
	}
	else
	{
		(*d).name ? printf("Name: %s\n",(*d).name) : printf("Name: (nil)\n");
		(*d).age ? printf("Age: %.6f\n",(*d).age) : printf("Age: (nil)\n");
		(*d).owner ? printf("Owner: %s\n",(*d).owner) : printf("Owner: (nil)\n");
	}
}
