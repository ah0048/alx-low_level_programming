#include <stdio.h>
#include "main.h"
/**
* print_diagsums -  function prints chess
* @a: array
* @size: size of array
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i;

	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + size - 1 - i];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
