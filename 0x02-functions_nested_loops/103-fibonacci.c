#include <stdio.h>

/**
 * main - rints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long first;
	unsigned long second;
	unsigned long next;
	unsigned long sum;

	first = 1;
	second = 2;
	sum = 0;

	for (i = 0; i < 48; ++i)
	{
		if (second > 4000000)
			break;
		if (second % 2 == 0)
			sum = sum + second;
		next = second;
		second = second + first;
		first = next;


	}
	printf("%lu\n", sum);
	return (0);
}
