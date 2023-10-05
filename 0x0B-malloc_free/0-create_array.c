#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size of array
 * @c: character
 * Return: null or array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a;

	if (size == 0)
	{
		return ('\0');
	}
	a = malloc(size);
	if (a == 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
