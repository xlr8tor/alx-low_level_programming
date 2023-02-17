#include <stdio.h>

/**
 * main - Reverse lowercase alphabets
 *
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
