#include <stdio.h>

/**
 * main - print lowercase alphabets
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}

	putchar('\n');
	return (0);
}
