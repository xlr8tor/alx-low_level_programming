#include "main.h"
/**
 * _strlen - checks the length of a string
 * @str: string to check
 *
 * Return: length of the string
 */

unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[++len])
		;
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in s2
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	len2 = len2 <= n ?  len2 : n;

	c =  malloc(len1 + len2 + 1);
	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(c + i) = *(s1 + i);

	for (j = 0; j < len2; j++, i++)
		*(c + i) = *(s2 + j);

	*(c + i) = '\0';
	return (c);
}
