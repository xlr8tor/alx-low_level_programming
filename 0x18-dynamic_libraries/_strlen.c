#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: Argument
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len++])
		;
	return (len);
}
