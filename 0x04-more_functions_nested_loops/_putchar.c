#include <stdio.h>

/**
*_putchar.c -this will writes character to the stdout
*@c: charcter

*return: returns character with written or _1 on error.
*/

int _putchar(char c)
{
    return write(1, &character, 1);
}
