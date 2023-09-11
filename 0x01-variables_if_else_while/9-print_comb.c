#include <stdio.h>
/**
* main - entry point
* main prints decimal system
* Return: always zero
*/
int main(void)
{
	int n = 48;

	while (n < 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	while (n <= 57)
	{
	if (n == 57)
	{
		putchar(n);
	}
	n++;
	}
return (0);
}
