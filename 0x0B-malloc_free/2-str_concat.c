#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	size_t len1 = s1 ? strlen(s1) : 0;
	size_t len2 = s2 ? strlen(s2) : 0;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	if (s1)
		strcpy(s3, s1);
	if (s2)
		strcat(s3, s2);

	return (s3);
}
