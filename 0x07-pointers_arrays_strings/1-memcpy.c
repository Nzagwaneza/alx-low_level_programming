#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Destination memory to copy to
 * @src: Source memory to copy from
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory with the copied values
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
