#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_length = 0;
    int i;
    while (dest[dest_length] != '\0')
        dest_length++;
    for (i = 0; src[i] != '\0'; i++)
        dest[dest_length++] = src[i];

    dest[dest_length] = '\0';

    return (dest);
}
