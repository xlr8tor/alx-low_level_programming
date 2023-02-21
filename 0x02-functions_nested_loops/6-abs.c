#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

/**
 * @c: integer number
 */
int _abs(int c);

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

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
