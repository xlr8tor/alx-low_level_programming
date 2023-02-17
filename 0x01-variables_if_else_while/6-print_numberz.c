#include <stdio.h>

/**
 * main - count 0 - 9
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
		putchar(i);
		i = i + 1;
	putchar('\n');

	return (0);
}
