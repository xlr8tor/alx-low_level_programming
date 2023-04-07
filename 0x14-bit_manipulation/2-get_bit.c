#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: position to search in n
 *
 * Return: value of bit || -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	if (n & mask)
		return (1);
	else
		return (0);
}
