#include "main.h"
/**
 * _strcat - writes the character c to stdout
 * @dest: destination
 * @src: source
 * Return: des.
 */
char *_strcat(char *dest, char *src)
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
	for (s = i; s < (i + j); s++)
	{
		dest[s] = src[s - i];
	}
	return (dest);
}
