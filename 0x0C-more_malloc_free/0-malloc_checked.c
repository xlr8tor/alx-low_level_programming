#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer or 98 if error
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	printf("print: %d", b);
	c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
