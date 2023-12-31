/**
 * _strncpy - Copies a string up to a specified number of bytes
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy from source
 *
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
