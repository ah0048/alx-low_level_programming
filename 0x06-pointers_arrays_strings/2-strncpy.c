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
	for (s = 0; s < n; s++)
	{
		if (s <= j)
		{
		dest[s] = src[s];
		}
		else
		{
			dest[s] = '\0';
		}
	}

	return (dest);
}
