#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j, l = 52;
	char *t;
	char *b;

	t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (s[i] == t[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
