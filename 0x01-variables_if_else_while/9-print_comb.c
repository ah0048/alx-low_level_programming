#include <stdio.h>
/**
* main - entry point
* main prints decimal system
* Return: always zero
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(',');
		putchar(' ');
		}
		n++;
	}
	putchar('\n');
return (0);
}
