#include "main.h"
/**
 * _strcpy - copy string
 * @dest: string to be copied to
 * @src: string to copy
 *
 * Return: char *dest
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;

	while ((dest[i] = src[i]) != '\0')
		++i;
	return (dest);
}
