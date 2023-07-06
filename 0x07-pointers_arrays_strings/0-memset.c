#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Starting address of the memory block to be filled
 * @b: The desired value to fill the memory block with
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the memory block with the updated values
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
