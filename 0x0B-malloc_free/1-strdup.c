#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: pointer to new memory location
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;

	if (!(*str))
		return (NULL);

	cpy = malloc(sizeof(str));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cpy[i] = str[i];

	return (cpy);
}
