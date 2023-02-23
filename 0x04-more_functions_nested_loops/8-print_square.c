#include "main.h"
/**
 * print_square - Draws a square line on the terminal
 * @n: width of square
 */
void print_square(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
