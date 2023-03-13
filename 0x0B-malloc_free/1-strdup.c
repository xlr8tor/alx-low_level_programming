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
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		++len;

	if (len == 0)
		cpy = malloc(sizeof(char));
	else
		cpy = malloc(sizeof(char) * len);

	while (i < len)
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}
