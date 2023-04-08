#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary in string format
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		sum = 2 * sum + (b[len] - '0');
	}

	return (sum);
}
