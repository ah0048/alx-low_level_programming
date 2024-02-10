#include "main.h"
/**
 * flip_bits - convert binary to int
 * @n: pointer
 * @m: index
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;

	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1UL)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
