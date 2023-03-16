#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string to count
 *
 * Return: int
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[++len])
		;

	return (len);
}

/**
 * _reverse - reverse a string
 * @str: string to reverse
 * @len: length of the string
 *
 * Return: array
 */
char *_reverse(char *str, int len)
{
	int i, j;
	char *tmp = malloc(sizeof(char) * 1000);

	if (tmp == NULL)
		return (NULL);

	for (i = len - 1, j = 0; i >= 0; --i, j++)
		tmp[j] = str[i];
	tmp[j] = '\0';

	return (tmp);
}

/**
 * is_digit - check if all characters are digits
 * @str: input string
 *
 * Return: 0 || 1
 */
int is_digit(char *str)
{
	int n = 0;

	while (str[n])
	{
		if (str[n] < '0' || str[n] > '9')
			return (0);
		n++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, len, len1, len2, carry, a = 0,  num1 = 0, num2 = 0, *res;
	char *s1 = argv[1], *s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	{
		printf("Error\n"), exit(98);
	}
	len1 = _strlen(s1), len2 = _strlen(s2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			carry += res[len1 + len2 + 1] + (num1 * num2);
			res[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
