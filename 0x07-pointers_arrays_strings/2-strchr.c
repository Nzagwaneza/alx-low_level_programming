#include "main.h"

/**
 * _strchr - Searches for a character in a string
 * @s: Input string
 * @c: Character to search for
 *
 * Return: Pointer to the first occurrence of the character in the string
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[t] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (NULL);
}