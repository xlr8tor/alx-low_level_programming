#include "main.h"
/**
 * main - Prints name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, n, sum = 0;
	char *endptr;

	for (i = 1; i < argc; i++)
	{
		n = strtol(argv[i], &endptr, 10);

		if (!(*endptr))
		{
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
