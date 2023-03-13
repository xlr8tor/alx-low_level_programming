#include "main.h"
#include "string.h"
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
	int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		++len1;
	while (s2[len2] != '\0')
		++len2;

	size = len1 + len2 + 1;

	cat = (char *) malloc(sizeof(char) * size);
	if (cat == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		cat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		cat[i] = s2[j], i++;

	return (cat);
}
