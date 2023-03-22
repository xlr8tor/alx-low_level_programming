#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 || 1 || 2
 */
int main(int argc, char *argv[])
{
	int a, i;
	char *f;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	f = (char *) main;

	for (i = 0; i < a; i++)
	{
		printf("%02hhx", f[i]);
		if (i  < a - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
