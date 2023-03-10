#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to input string
 * @c: value to locate in string
 *
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
