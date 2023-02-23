#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of _ to print
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n = n - 1;
	}
	_putchar('\n');
}
