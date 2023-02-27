#include "main.h"
/**
 * _atoi - coverts string to integer
 * @s: string to covert
 *
 * Return: (int) s
 */

int _atoi(char *s)
{
	int pow  = 1;
	int i, j, tmp, sign, num;

	sign = num = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - (j + 1)];
		s[i - (j + 1)] = tmp;
	}

	for (j = 0; j < i; j++)
	{
		if (s[j] == '-')
			sign++;
		else if (s[j] >= '0' && s[j] <= '9')
		{
			num += (s[j] - '0') * pow;
			pow *= 10;
		}
		else
		{
			continue;
		}
	}
	num = sign % 2 == 0 ? num : -num;
	return (num);

}
