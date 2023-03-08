#include "main.h"
/**
 * _strlen_recursion - finds length of string
 * @s: string to find length
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (!(*s))
		return (0);

	len = _strlen_recursion(s + 1) + 1;

	return (len);
}
