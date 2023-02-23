#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Except 2 and 4
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c == 2 || c == 4)
		{
			c = c + 1;
			continue;
		}
		_putchar(c + '0');
		c = c + 1;
	}
	_putchar('\n');
}
