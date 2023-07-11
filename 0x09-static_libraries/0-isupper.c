#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase
 *@c: character to be checked
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
