#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to search
 * @index: position to set
 *
 * Return: -1 || 0 || 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	*n = *n | mask;
	return (1);
}
