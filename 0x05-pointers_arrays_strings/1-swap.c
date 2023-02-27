#include "main.h"
/**
 * swap_int - Swap the values of 2 integers
 * @a: First int
 * @b: Second int
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
