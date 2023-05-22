#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to block to be filled
 * @b: value to be set in memeory block
 * @n: number of bytes to be set to value
 *
 * Return: pointer to the block (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
