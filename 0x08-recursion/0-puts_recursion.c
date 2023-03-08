#include "main.h"
/**
 * _puts_recursion - prints a string followed by \n
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s)
		_puts_recursion(s);
	if (!(*s))
		_putchar('\n');
}
