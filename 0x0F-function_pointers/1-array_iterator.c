#include "function_pointers.h"

/**
 * array_iterator - map over an array of elements and
 * execute a function on each element
 * @array: pointer to the array
 * @size: size of the array
 * @action: function to execute on each array element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if ((int) size <= 0 || (action == NULL) || (array == NULL))
		return;
	for (i = 0; i < (int) size; i++)
		action(*(array + i));
}
