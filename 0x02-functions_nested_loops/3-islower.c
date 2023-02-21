#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

/**
 * @c: integer number
 */
int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * _islower - Check if arg is lowercase
 * @c: int number
 *
 * Return: 1 if lowercase. 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
