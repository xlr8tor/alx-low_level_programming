#include "dog.h"
/**
 * print_dog - print a dog struct
 * @d: pointer to a dog struct
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	char *msg = "(nil)";

	if (d == NULL)
		return;
	name = (*d).name != NULL ? (*d).name : msg;
	owner = (*d).owner != NULL ? (*d).owner : msg;

	if (d->age < 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", name, owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, (*d).age, owner);
}
