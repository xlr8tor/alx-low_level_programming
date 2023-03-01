#include "main.h"
/**
 * string_toupper - changes all lowercase
 * letters of a string to uppercase
 * @ptr: lowercase string
 *
 * Return: uppercase string
 */

char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 'a' + 'A';
	}
	return (ptr);
}
