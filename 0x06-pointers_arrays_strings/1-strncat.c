#include "main.h"
/**
*_strncat - Concatenates two strings with a specified number of bytes.
*@dest: Destination string to be appended to.
*@src: Source string to be appended.
*@n: Number of bytes to be used from src.
*Return: Pointer to the resulting string (dest).
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_length = 0;
int src_index = 0;
while (dest[dest_length] != '\0')
{
dest_length++;
}
while (src_index < n && src[src_index] != '\0')
{
dest[dest_length] = src[src_index];
dest_length++;
src_index++;
}
dest[dest_length] = '\0';

return (dest);
}
