#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j;
	int n1;
	int n2;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 15; ++j)
		{
			n1 = j / 10;
			n2 = j % 10;

			if (n1 > 0)
				_putchar(n1 + '0');
			_putchar(n2 + '0');
		}
		_putchar('\n');
	}
}
