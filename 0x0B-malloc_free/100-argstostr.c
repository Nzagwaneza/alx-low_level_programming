#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates an array of strings into a single string
 * @ac: The number of strings in the array
 * @av: The array of strings
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
int i, j, total_length = 0, current_position = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_length++;
}
total_length += ac;

str = malloc(sizeof(char) * (total_length + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[current_position] = av[i][j];
current_position++;
}
str[current_position++] = '\n';
}
str[current_position] = '\0';

return (str);
}
