#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		_putchar(c + '0');
		c = c + 1;
	}
	_putchar('\n');
}
