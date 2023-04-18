typedef struct dog dog_t
#ifndef _DOG_
#define _DOG_
/**
 * struct dog - Qualities of a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
#ifndef _INIT_DOG_
#define _INIT_DOG_
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
#ifndef _PRTDG_
#define _PRTDG_
void print_dog(struct dog *d);
#endif
