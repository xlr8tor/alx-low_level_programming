#include <stdio.h>

/**
 * main - print lowercase alphabets except q and e
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c = c + 1;
			continue;
		}

		putchar(c);
		c = c + 1;
	}

	putchar('\n');
	return (0);
}
