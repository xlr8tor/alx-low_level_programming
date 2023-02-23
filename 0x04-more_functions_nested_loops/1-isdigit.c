#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: First argument
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	c = c >= '0' && c <= '9' ? 1 : 0;
	return (c);
}
