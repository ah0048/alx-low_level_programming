#include <stdio.h>
#include "main.h"
/**
 * print_array - writes the character c to stdout
 * @a: The array
 * @n: elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i != (n - 1))
		{
			printf("%d", a[i]);
			printf(",");
			printf(" ");
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
