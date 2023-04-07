#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary in string format
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int sum = 0, mul = 1;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] == '0' || b[len] == '1')
		{
			if (b[len] == '1')
				sum += mul;
			mul *= 2;
		}
	}

	return (sum);
}
