#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < (int) sizeof(unsigned long int) * 8; i++)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (!flag)
		_putchar('0');
}
