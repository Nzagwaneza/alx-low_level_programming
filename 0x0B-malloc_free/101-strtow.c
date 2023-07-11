#include <stdlib.h>
#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string
 * @s: String to evaluate
 *
 * Return: Number of words
 */
int count_words(char *s)
{
	int flag, words;

	flag = 0;
	words = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: Pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, num_words = 0, c = 0, start;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[len])
		len++;
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	matrix = malloc(sizeof(char *) * (num_words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				tmp = malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				for (start = 0; start < c; start++)
					tmp[start] = str[k++];
				tmp[start] = '\0';
				matrix[k - c] = tmp;
				c = 0;
			}
		}
		else if (c++ == 0)
			k = i;
	}

	matrix[num_words] = NULL;

	return (matrix);
}
