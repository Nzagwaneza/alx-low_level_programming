#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *@s :string to be printed
 */

void print_rev(char *s)
{
int k = 0;

while (s[k] != '\0')
k++;

while (k--)
_putchar(s[k]);
_putchar('\n')
}
