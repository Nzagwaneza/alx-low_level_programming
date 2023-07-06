#include "main.h"

/**
 * _strchr - Searches for a character in a string
 * @str: Input string
 * @chr: Character to search for
 *
 * Return: Pointer to the first occurrence of the character in the string
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
int t = 0;
for (; s[t] != '\0'; t++)
{
if (s[t] == c)
return (&s[t]);
}
return (NULL);
}
