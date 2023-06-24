#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Description: Uses _putchar to print numbers 0 to 9 with a new
 *line after each.
 *
 * Return: void
 */

void print_numbers(void)

{
char c;

for (c = '0' c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
