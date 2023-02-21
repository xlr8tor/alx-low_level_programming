#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

/**
 * @c: integer c
 */
int print_last_digit(int c);

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}

/**
 * print_last_digit - Return the last digit of number
 * @c: int c
 *
 * Return: Value of last digit
 */

int print_last_digit(int c)
{
	c = c >= 0 ? c % 10 : -1 * (c % 10);
	printf("%d", c);
	return (c);
}
