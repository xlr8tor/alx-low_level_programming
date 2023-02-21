#include "main.h"

/**
 * print_sign - print sign of a number
 * @c: int number
 *
 * Return: 1 if c > 0. 0 if 0. -1 if < 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (!c)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
