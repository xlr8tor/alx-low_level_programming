#include "main.h"

/**
 * _islower - Check if arg is lowercase
 * @c: int number
 *
 * Return: 1 if lowercase. 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
