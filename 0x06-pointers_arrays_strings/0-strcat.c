#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string to be appended to.
 * @src: Source string to be appended.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0, src_index = 0;

	while (dest[dest_length] != '\0')
		dest_length++;

	while (src_index >= 0)
	{
		dest[dest_length] = src[src_index];
		if (src[src_index] == '\0')
			break;
		dest_length++;
		src_index++;
	}

	return (dest);
}
