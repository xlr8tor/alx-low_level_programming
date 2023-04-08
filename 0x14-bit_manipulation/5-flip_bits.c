#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: 1st argument
 * @m: 2nd argument
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int delta = n ^ m;
	unsigned int count = 0;

	while (delta != 0)
	{
		count += delta & 1;
		delta >>= 1;
	}

	return (count);
}
