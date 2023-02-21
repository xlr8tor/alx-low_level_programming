#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			int n1 = (i * j) / 10;
			int n2 = (i * j) % 10;

			if (n1 > 0)
				_putchar(n1 + '0');
			_putchar(n2 + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * j) < 10)
					_putchar(' ');
			}
		}

	_putchar('\n');
	}
}

