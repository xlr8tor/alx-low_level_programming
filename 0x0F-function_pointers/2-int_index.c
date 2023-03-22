#include "function_pointers.h"

/**
 * int_index - find index of element if in array
 * @array: search array
 * @size: size of array
 * @cmp: comparison function
 *
 * Return: index of element || -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || (array == NULL) || (cmp == NULL))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
