#include "main.h"
#include <stdlib.h>
/**
 * str_concat - create array
 * @s1: string to copy
 * @s2: 2nd string to copy
 * Return: null or array
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, z, size1, size2;

	char *s;

	size1 = 1;
	size2 = 1;
	z = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		size2++;
	}
	s = malloc((size1 + size2) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[z] = s1[i];
		z++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[z] = s2[j];
		z++;
	}
	return (s);
}
