#include "dog.h"
/**
 * new_dog - initialize a dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner's name
 *
 * Return: pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
