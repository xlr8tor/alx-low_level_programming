#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: max number
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%4d", i * j);
			if (j < n - 1)
				printf(",");
		}
	}
}
