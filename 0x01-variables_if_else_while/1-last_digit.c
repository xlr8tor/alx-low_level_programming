#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - int last digit checker
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int mod;
	char msg[] = "Last digit of ";
	char gt[] = "and is greater than 5";
	char lt[] = "and is less than 6 and not 0";
	char zero[] = "and is 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	mod =  n % 10;
	if (mod == 0)
		printf("%s %d is %d %s\n", msg, n, mod, zero);
	else if (mod > 5)
		printf("%s %d is %d %s\n", msg, n, mod, gt);
	else if (mod < 6)
		printf("%s %d is %d %s\n", msg, n, mod, lt);

	return (0);
}
