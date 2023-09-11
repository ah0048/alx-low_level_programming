#include <stdio.h>
/**
* main - entry point
* main prints hexadicemal system
* Return: always zero
*/
int main(void)
{
	int i, j, m, n;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (m = 48; m <= 57; m++)
			{
				for (n = m + 1; n <= 57; n++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(n);
					if (i != 57 || j != 56 || m != 57 || n != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
