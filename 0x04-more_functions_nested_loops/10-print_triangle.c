#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * to the terminal
 * @size: Size of the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; ++i)
	{
		for (j = size - i; j > 0; --j)
			_putchar(' ');

		for (k = 1; k <= i; ++k)
			_putchar('#');

		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
