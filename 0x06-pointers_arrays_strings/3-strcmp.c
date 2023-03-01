#include "main.h"



int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\n')
	{
		if (s1[i] > s2[i])
		       return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else
		{
			i++;
			continue;
		}
		i++;
	}
	return (0);
}
