#include "main.h"

/**
 * print_last_digit - Return the last digit of number
 * @c: int c
 *
 * Return: Value of last digit
 */

int print_last_digit(int c)
{
	c = c >= 0 ? c % 10 : -1 * (c % 10);
	_putchar(c + '0');
	return (c);
}
