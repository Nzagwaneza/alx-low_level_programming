#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: Input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i++;
	while (s[i] != '\0')
	{
		for (int j = 0; j < 13; j++)
		{
			if (s[i] == sep_words[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
				break;
			}
		}
		i++;
	}

	return (s);
}
