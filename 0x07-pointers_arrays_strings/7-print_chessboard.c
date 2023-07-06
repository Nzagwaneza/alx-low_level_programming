#include "main.h"

/**
 * _strstr - Finds the first occurrence of a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;

while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
}

return (NULL);
}
