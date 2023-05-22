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
	unsigned int i = 0, j = 0;

	while (dest[i++])
		;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';

	return (dest);
}
