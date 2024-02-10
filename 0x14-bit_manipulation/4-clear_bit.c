#include "main.h"
/**
 * clear_bit - convert binary to int
 * @n: pointer
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
