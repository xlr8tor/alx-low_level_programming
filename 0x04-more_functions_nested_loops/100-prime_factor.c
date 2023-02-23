#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	long int max_prime = 0;
	int i;

	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}

	while (num % 3 == 0)
	{
		max_prime = 3;
		num /= 3;
	}

	for (i = 5; i <= sqrt(num); i += 6)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num /= i;
		}
		while (num % (i + 2) == 0)
		{
			max_prime = i + 2;
			num /= (i + 2);
		}
	}

	if (num > 4)
		max_prime = num;

	printf("%ld\n", max_prime);
	return (0);
}
