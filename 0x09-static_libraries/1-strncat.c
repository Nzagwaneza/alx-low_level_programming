#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string to append
 * @src: source string to append
 * @n: max number of bytes to append
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
