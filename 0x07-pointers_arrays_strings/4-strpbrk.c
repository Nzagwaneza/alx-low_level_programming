/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Pointer to the first occurrence of any character from 'accept' in 's',
 *         or NULL if no matching characters are found
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
