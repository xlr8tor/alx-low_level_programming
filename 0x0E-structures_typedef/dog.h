#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - blueprint for a dog instance
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* _MAIN_H_ */
