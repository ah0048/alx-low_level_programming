#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - writes the character c to stdout
 * @b: The character to print
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
