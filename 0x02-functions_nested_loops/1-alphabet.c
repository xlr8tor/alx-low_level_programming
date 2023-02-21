#include <stdio.h>

/**
 * main - Prints lowercase alphabets
 *
 * Return: 0
 */

void print_alphabet(void);

/**
 * print_alphabet -  Prints lowercase alphabets
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
}
