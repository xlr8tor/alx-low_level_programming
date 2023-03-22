#include "3-calc.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 || 98 || 99 || 100
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	func = get_op_func(op);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(a, b));

	return (0);
}
