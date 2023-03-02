#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints the contents of a buffer
 * @b: input string
 * @size: size to print
 */

void print_buffer(char *b, int size)
{
	int i, j, c;

	c = 0;
	for (i = 0; i < size; i += 10)
	{
		printf("000000%02x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (c >= size)
				printf("  ");
			else
				printf("%02x", *(b + c));
			if (j % 2 != 0)
				printf(" ");
			c++;
		}
		c -= 10;

		for (j = 0; j < 10 && c < size; j++)
		{
			printf("%c", *(b + c) > 31 && *(b + c) < 127 ? *(b + c) : '.');
			c++;
		}
		if (i < size - 10)
			printf("\n");
	}
	printf("\n");
}
