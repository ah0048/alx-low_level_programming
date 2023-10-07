#include "main.h"
#include <stdlib.h>
/**
 * array_range - writes the character c to stdout
 * @min: first string
 * @max: second string
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;

	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
