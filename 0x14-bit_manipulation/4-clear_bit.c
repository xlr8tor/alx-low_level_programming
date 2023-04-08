#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to search
 * @index: position to clear
 *
 * Return: -1 || 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
