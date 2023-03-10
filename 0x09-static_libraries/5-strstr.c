#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: search string
 * @needle: substring
 *
 * Return: NULL | char *haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		while (needle[i] && needle[0] == *haystack)
		{
			if (*(haystack + i) == needle[i])
				i++;
			else
				break;
		}
		if (needle[i])
		{
			i = 0;
		}
		else
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
