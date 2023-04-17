#include "dog.h"
/**
 * init_dog - Initializes variable of type struct dog
 * @d: Structure variable of the dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dogs's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
