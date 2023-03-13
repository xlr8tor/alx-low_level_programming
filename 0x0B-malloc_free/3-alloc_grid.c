#include "main.h"
/**
 * alloc_grid - returns a pointer to a 
 * 2 dimensional array of integers.
 * @width: int
 * @height: int
 *
 * Return: int **
 */

int **alloc_grid(int width, int height)
{
	int *arr, **s;
	int i;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(width * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (width * height); i++)
		arr[0] = 0;

	s = &arr;
	return (s);
}
