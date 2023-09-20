#include "main.h"
/**
 * swap_int - writes the character c to stdout
 * @a: The character to print
 * @b: The character to print
 * Return: On success 1.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
