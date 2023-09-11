#include <stdio.h>
/**
* main - entry point
* main prints hexadicemal system
* Return: always zero
*/
int main(void)
{
	int n = 48, l = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}



