#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int len1 = 0, len2 = 0;
	int i, j;

	while (s1[++len1])
		;
	while (s2[++len2])
		;
	cat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		cat[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		cat[i] = s2[j];
	cat[i] = '\0';

	return (cat);
}
