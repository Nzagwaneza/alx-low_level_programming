#include "main.h"
#include <stdio.h>

/**
*_puts_recursion: prints a string, followed by a new line
*@s: string to reverse
*
* Return: nothing
*/

void _puts_recursion(char *s)

{

if (*s !== '\0')
{
_putchar('\n');
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);

}
