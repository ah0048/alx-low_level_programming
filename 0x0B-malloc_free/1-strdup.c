#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create array
 * @str: string to copy
 * Return: null or array
 */
char *_strdup(char *str)
{
	int i, size, j;

	char *s;

	i = 0;
	size = 1;
	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}
