#include "main.h"

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * @i: Iterator.
 * @len: Length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 if it's not.
 */
int check_palindrome(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_palindrome(s, i + 1, len - 1));
}

/**
 * calculate_length - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int calculate_length(char *s)
{
if (*s == '\0')
return (0);
return (1 + calculate_length(s + 1));
}
