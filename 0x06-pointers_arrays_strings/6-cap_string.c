#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && _islower(s[i]))
		{
			s[i] = s[i] - 'a' + 'A';
			continue;
		}
		switch (s[i])
		{
			case ' ':
			case '\n':
			case '\t':
			case '.':
			case ',':
			case '!':
			case '?':
			case '(':
			case ')':
			case '{':
			case '}':
			case '"':
				if (_islower(s[i + 1]))
					s[i + 1] = s[i + 1] - 'a' + 'A';
				break;
			default:
				break;

		}
	}
	return (s);
}

/**
 * _islower - check if lowercase
 * @c: character
 *
 * Return: 0 or 1
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
