#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - writes the character c to stdout
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;

	char *ptr;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((i + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (n >= j)
	{
		n = j;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
