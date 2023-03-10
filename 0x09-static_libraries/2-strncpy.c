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
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
