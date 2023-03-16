#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: mininum number in range
 * @max: maximum number in range
 *
 * Return: pointer || NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, rng;

	if (min > max)
		return (NULL);

	rng = max - min + 1;
	arr = malloc(sizeof(int) * rng);
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		*(arr + i) = min;
		++min;
	}

	return (arr);
}
