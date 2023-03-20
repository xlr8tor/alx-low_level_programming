#include "dog.h"
/**
 * _strlen - determine the length of a string
 * @str: input string
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[++len])
		;

	return (len);
}

/**
 * _strcpy - copy string from one memory block to another
 * @dest: destination memory block
 * @src: src memory block
 *
 * Return: char pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
