#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize array
 *
 * Return: pointer *char || NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size < 1)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
