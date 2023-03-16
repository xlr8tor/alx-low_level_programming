#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer or 98 if error
 */

void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (c);
}
