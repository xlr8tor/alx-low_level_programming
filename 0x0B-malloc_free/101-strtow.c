#include "main.h"

/**
 * word_count - returns the number of words
 * @str: strings to search
 *
 * Return: number of words
 */

int word_count(char *str)
{
	int i, count, state;

	count = 0, state = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '\t')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			count++;
		}
	}
	return (count);
}

/**
 * word_size - returns len of word
 * @str: search string
 *
 * Return: len of word
 */
int word_size(char *str)
{
	int i = 0, len = 0;

	while (str[i] && str[i] != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Return: char **
 */
char **strtow(char *str)
{
	char **arr;
	int i, j, count, letters, n = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = word_count(str);
	if (count == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (count + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		while (str[n] == ' ')
			n++;

		letters = word_size(str + n);

		arr[i] = malloc(sizeof(char) * (letters + 1));
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < letters; j++)
			arr[i][j] = str[n++];
		arr[i][j] = '\0';
	}

	arr[i] = NULL;
	return (arr);
}
