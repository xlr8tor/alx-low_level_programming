#include <stdio.h>

/**
 * main - print lowercase alphabets
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C = C + 1;
	}

	putchar('\n');
	return (0);
}
