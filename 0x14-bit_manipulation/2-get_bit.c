#include "main.h"
/**
 * get_bit - convert binary to int
 * @n: pointer
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int shift;

	if (index >= (sizeof(unsigned int)) * 8)
		return (-1);
	shift = n >> index;
	return (shift & 1);
}
