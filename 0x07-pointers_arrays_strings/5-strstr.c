/**
 * _strstr - Searches for the first occurrence of a substring within a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;

}
if (*n == '\0')
return (haystack);
}
return (NULL);
}
