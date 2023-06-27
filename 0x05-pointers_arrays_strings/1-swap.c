include "main.h"

/**
 * main - swaps the values of two integers.
 * @a: integer to be swabed
 *@b: integer to be swabed.
 * Return: Always 0.
 */

void swap_int(int *a, int *b);
{
int l;

l = *a;
*a = *b;
*b = l;
}
