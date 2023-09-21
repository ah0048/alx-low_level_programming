#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse
 * @a: array
 * @n: num of elements
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	tmp = 0;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
