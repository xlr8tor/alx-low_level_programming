#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: string to append to
 * @src: string to append
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[j] = '\0';
	return (dest);
}
