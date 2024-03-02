#include "main.h"
/**
 * get_endianness - check the code
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
