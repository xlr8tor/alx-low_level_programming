#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: int num
 *
 * Return: absolute value of argument c
 */
int _abs(int c)
{
	c = c >= 0 ? c : -1 * c;
	return (c);
}
