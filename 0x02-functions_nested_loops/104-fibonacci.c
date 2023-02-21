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

	first = 1;
	second = 2;

	printf("%lu, ", first);
	printf("%lu, ", second);

	for (i = 0; i < 96; ++i)
	{
		next = second;
		second = second + first;
		first = next;

		printf("%lu", second);

		if (i < 95)
			printf(", ");
	}
	printf("\n");
	return (0);
}
