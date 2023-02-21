#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

/**
 * @c: integer number
 */
int _isalpha(int c);

int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * _isalpha - Check if arg is lowercase
 * @c: int number
 *
 * Return: 1 if alphabetic. 0 if not.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
