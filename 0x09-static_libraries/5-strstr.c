#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - Finds the first occurrence of a substring within a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the first occurrence of the substring,
 *         or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
