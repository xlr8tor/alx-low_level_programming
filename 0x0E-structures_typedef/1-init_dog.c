#include "dog.h"
/**
 * init_dog - initialize a dog struct
 * @d: pointer to dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
