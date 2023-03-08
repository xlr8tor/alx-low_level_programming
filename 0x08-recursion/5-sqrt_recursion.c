#include "main.h"

/**
 * _sqrt - checks for the root
 * @n: base
 * @target: target
 *
 * Return: -1 0r n
 */
int _sqrt(int n, int target)
{
	if (n * n == target)
		return (n);
	if (n * n > target)
		return (-1);
	return (_sqrt(n + 1, target));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: num to find root of
 *
 * Return: num or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(2, n));
}
