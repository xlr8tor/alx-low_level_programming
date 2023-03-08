#include "main.h"
/**
 * is_prime - check if n is prime
 * @i: int
 * @n: int
 *
 * Return: int
 */

int is_prime(int i, int n)
{
	if ((i * i <= n) && (n % i == 0 || n % (i + 2) == 0))
		return (0);
	else
		return (1);
	return (is_prime(i + 6, n));
}

/**
 * is_prime_number - check if the input int is a prime number
 * @n: int to check
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);
	return (is_prime(5, n));
}
