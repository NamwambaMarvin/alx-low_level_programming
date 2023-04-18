#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog instance
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = strlen(name);
	int owner_len = strlen(owner);

	dog_t *new_dog;
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strcpy(new_dog->owner, owner);
	return (new_dog);
}
