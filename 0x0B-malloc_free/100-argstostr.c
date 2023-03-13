#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument array
 *
 * Return: char *
 */

char *argstostr(int ac, char **av)
{
	char *nargs;
	int i, j, total = 0, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			total += 1;
	nargs = malloc(sizeof(char) * (total + ac) + 1);

	if (nargs == NULL)
		return (NULL);
	while (n < total)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				nargs[n] = av[i][j];
				++n;
			}
			nargs[n] = '\n';
			++n;
		}
	}

	return (nargs);
}
