#include <stdio.h>

/**
 * main - Hexadecimal characters
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i > 9)
		{
			putchar(i % 10 + 'a');
			i = i + 1;
			continue;
		}
		putchar(i % 10 + '0');
		i = i + 1;
	}

	putchar('\n');
	return (0);
}


