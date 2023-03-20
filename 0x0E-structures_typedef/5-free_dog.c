#include "dog.h"
/**
 * free_dog - free memory blocks of a dog struct
 * @d: struct pointer
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
