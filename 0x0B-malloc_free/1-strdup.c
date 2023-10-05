#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create array
 * @str: string to copy
 * Return: null or array
 */
char *_strdup(char *str)
{
	int i, size;

	char *s;

	i = 0;
	size = 1;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
		size++;
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
	}
	return (s);
}
