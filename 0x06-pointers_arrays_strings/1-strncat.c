#include "main.h"
/**
 * _strncat - append string up to n
 * @dest: string to be added to
 * @src: string to append
 * @n: number of characters
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && src[j]; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
