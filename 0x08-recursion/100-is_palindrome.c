#include "main.h"
/**
 * _strlen - finds length of string
 * @s: input string
 *
 * Return: int
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * pal_checker - check if string is palindrome
 * @s: input string
 * @str: start of string
 * @end: end of string
 *
 * Return: 0 or 1
 */
int pal_checker(char *s, int str, int end)
{
	if (str == end)
		return (1);
	if (s[str] != s[end])
		return (0);
	if (str > end / 2)
		return (1);
	return (pal_checker(s, str + 1, end - 1));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: input string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen(s) - 1));
}
