#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int mid;

	for (i = 0; str[i] != '\0'; ++i)
		;

	mid = i % 2 == 0 ? (i / 2) : i - ((i - 1) / 2);

	for (; mid < i; ++mid)
		_putchar(str[mid]);
	_putchar('\n');
}
