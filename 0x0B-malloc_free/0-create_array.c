#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size...
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Description: It allocates an array of size 'size' and
 * initializes each element with the character 'c'.
 *
 * Return: Pointer to the created array, or NULL if size is 0 ...
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;

return (str);
}
