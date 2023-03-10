#include "main.h"
/**
 * main - Prints name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num, cents = 0;

	if ((argc - 1) != 1)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
		printf("%d\n", cents);
	else
	{
		while (num > 0)
		{
			if (num >= 25)
			{
				cents += num / 25, num = num % 25;
			}
			else if (num >= 10)
			{
				cents += num / 10, num = num % 10;
			}
			else if (num >= 5)
			{
				cents += num / 5, num = num % 5;
			}
			else if (num >= 2)
			{
				cents += num / 2, num = num % 2;
			}
			else if (num >= 1)
			{
				cents += num / 1, num = num % 1;
			}
		}
		printf("%d\n", cents);
	}
	return (0);
}
