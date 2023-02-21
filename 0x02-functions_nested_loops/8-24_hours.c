#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; ++i)
	{
		for (j = 0; j < 60; ++j)
		{
			int n1 = i / 10;
			int n2 = i % 10;
			int n3 = j / 10;
			int n4 = j % 10;

			_putchar(n1 + '0');
			_putchar(n2 + '0');
			_putchar(':');
			_putchar(n3 + '0');
			_putchar(n4 + '0');
			_putchar('\n');
		}
	}
}
