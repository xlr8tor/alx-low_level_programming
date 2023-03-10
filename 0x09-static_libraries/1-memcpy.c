#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to memory area to be copied to
 * @src: pointer to memory area to be copies from
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
