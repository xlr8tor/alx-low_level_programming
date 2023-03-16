#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory location
 * @old_size: number of bytes of previous memory location
 * @new_size: size in bytes of the new memory block
 *
 * Return: pointer || NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		c = malloc(new_size);
		if (c == NULL)
			return (NULL);
		for (i = 0; i < (old_size || i < new_size); i++)
			c[i] = ((int *)ptr)[i];
		free(ptr);
		return (c);
	}

	if (ptr == NULL)
	{
		c = malloc(new_size);
		if (c == NULL)
			return (NULL);
		return (c);
	}
	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	abort();
}
