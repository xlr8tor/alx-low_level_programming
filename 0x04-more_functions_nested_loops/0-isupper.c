#include "main.h"

/**
 * _isupper - Returns 1 if c is uppercase,
 * Else Returns 0
 * @c: First argument
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	c = c >= 'A' && c <= 'Z' ? 1 : 0;
	return (c);
}
