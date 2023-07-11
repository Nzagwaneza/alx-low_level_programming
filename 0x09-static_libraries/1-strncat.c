#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - concantenates 2 strings 
 * @dest: destination string to append
 * @src: source string to append
 * @n: max number of bytes to append
 * return: it will return strcat
 */

char *_strncat(char *dest, char *src, int n)
{
    return strncat(dest, src, n);
}
