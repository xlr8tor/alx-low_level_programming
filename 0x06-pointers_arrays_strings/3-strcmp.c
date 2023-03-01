#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: 1st arg
 * @s2: 2nd arg
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	while (s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			result = (s1[i] - s2[i]);
			break;
		}
		else if (s1[i] < s2[i])
		{
			result = (s1[i] - s2[i]);
			break;
		}
		i++;
	}
	return (result);
}
