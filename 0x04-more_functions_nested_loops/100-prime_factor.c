#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;

	int c, i;

	c = 2;
	i = 2;
	while (n > 1)
	{
		if (n % c == 0)
		{
			n = n / c;
			if (c > i)
			{
				i = c;
			}
		}
		else
			c++;
	}
	printf("%d", i);
	printf("\n");
	return (0);
}
