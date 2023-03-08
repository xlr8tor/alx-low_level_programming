#include "main.h"

int is_pal(char *s, int str, int end)
{
	if (str == end)
		return (1);
	if (*(s + str) != *(s + end))
		return (0);
	if (str < end/2)
		return is_pal(s, str + 1, end - 1);
}

int is_palindrome(char *s)
{
	int len = 0;

	while (*s)
		++len;
	if (len == 0)
		return (0);

	return is_pal(s, 0, len - 1);
}
