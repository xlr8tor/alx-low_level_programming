#include "main.h"

int is_prime_number(int n)
{
	if (n <= 3 && n != 1)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

}
