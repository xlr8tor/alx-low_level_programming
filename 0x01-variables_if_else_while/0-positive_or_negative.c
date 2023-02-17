#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check if random number is positive, negative
 * or zero
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("is zero\n");
	else if (n > 0)
		printf("is positive\n");
	else
		printf("is negative\n");

	return (0);
}
