#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 || 1
 */
int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *) &n;

	return (*ptr == 1);
}
