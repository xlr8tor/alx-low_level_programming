#include "main.h"
/**
 * _strncpy - Copies string up to n
 * @dest: destionation
 * @src: string to copy
 * @n: number of characters
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		;

	while (i < n)
	{
		if (src[i] != '\0' && src[i])
			dest[i] = src[i];
		else
			dest[i] = '\0';
		++i;
	}
	dest[j] = '\0';
	return (dest);
}
