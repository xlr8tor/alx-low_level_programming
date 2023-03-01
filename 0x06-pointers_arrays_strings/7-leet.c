#include "main.h"
/**
 * leet - transform input string
 * @s: input string
 *
 * Return: char *s
 */

char *leet(char *s)
{
	int i, j, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (s[i] == tr[j] || s[i] - 32 == tr[j])
				s[i] = trw[j];
		}
	}
	return (s);
}

