#include "main.h"
#include <stdio.h>
/**
* print_to_98 -  prints last digit.
* @n : starting num
* Return: void
*/
void print_to_98(int n)
{
	int s = n;

	if (s < 98)
	{
		for (s = n; s < 98; s++)
		{
		printf("%d", s);
		printf(",");
		printf(" ");
		}
	}
	else if (s > 98)
	{
		for (s = n; s > 98; s--)
		{
		printf("%d", s);
		printf(",");
		printf(" ");
		}
	}
	if (s == 98)
	{
		printf("%d", s);
	}
	printf("\n");
}
