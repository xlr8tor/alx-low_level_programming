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
	unsigned long l;

	first = 1;
	second = 2;

	printf("%lu, ", first);
	printf("%lu, ", second);

	for (i = 1; i < 92; ++i)
	{
		next = second;
		second = second + first;
		first = next;

		printf("%lu", second);

		if (i < 95)
			printf(", ");
	}
	unsigned long n1 = first/l;
	unsigned long n2 = first % l;
	unsigned long n3 = second/l;
	unsigned long n4 = second % l;

	for (i = 92; i < 99; i++)
	{
		printf("%lu, ", n3 + (n4/l));
		printf("%lu", n4 % l);
		n3 = n3 + n1;
		n1 = n3 - n1;
		n4 = n4 + n2;
		n2 = n4 - n2;
	}
	printf("\n");
	return (0);
}
