#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j, l = 13;
	char *t = "ABCDEFGHIJKLM";
	char *b = "NOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (s[i] == t[j] || s[i] - 32 == t[j])
				s[i] = s[i] + 13;
			else if (s[i] == b[j] || s[i] - 32 == b[j])
				s[i] = s[i] - 13;
			else
				continue;
		}	
	}
	return (s);
}
