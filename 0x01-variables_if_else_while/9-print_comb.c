#include <stdio.h>

/**
 * main - Comma delimited digits
 *
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 0)
			putchar(' ');
		putchar(c % 10 + '0');
		if (c != 9)
			putchar(',');
		c = c + 1;
	}
	putchar('\n');
	return (0);
}

