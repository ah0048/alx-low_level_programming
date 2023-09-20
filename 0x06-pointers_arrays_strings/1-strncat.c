#include "main.h"
/**
 * _strncat - writes the character c to stdout
 * @dest: destination
 * @src: source
 * @n: num of bytes
 * Return: des.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, s;

	i = 0;
	j = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (s = i; s < (i + n); s++)
	{
		dest[s] = src[s - i];
	}
	return (dest);
}
