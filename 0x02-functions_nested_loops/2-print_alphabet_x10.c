#include <stdio.h>

/**
 * main - Prints lowercase alphabets 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 -  Prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; ++c)
			putchar(c);
		putchar('\n');
	}
}
