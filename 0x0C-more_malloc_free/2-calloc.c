#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array elements
 * @size: number of bytes of memebers
 *
 * Return: void pointer || NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int nsize, i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nsize = nmemb * size;
	c = malloc(nsize);

	if (c == NULL)
		return (NULL);
	for (i = 0; i < nsize; i++)
		*(c + i) = 0;

	return (c);
}
