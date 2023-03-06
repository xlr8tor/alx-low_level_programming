#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals 
 * of a square matrix of integers
 * @a: pointer to 2 dimensional array
 * @size: size of square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j, l;
	long int fd = 0, ld = 0;

	for (l = 0; l < size; l++)
	{
		for (i = 0, j = size - 1; i < size; i++, j--)
		{
			printf("fd: %ld\n", fd);
		       printf("ld: %ld\n", ld);	
			fd += *(&(a + l)[i]);
			ld += *(&(a + l)[j]);
			break;
		}
	}
	printf("%ld, %ld",fd,ld);
}
