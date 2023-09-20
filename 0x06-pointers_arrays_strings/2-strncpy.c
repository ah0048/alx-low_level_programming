#include "main.h"
/**
 * _strncpy - writes the character c to stdout
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, s;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	if (n > j)
		n = j;
	for (s = 0; s <= n; s++)
	{
		dest[s] = src[s];
	}
	return (dest);
}
