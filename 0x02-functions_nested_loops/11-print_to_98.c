#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: First argument
 */
void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{	
			printf("%d",i);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

	}
	else
	{
		for (i = n; i >= 98; --i)
		{
		 	printf("%d",i);
                        if (i > 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
		}
	}

	_putchar('\n');
}
