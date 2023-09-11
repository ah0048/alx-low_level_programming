#include <stdio.h>
/**
* main - entry point
* main prints alphabet in order in lower and upper case
* Return: always zero
*/
int main(void)
{
	char lower = 'a', upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
return (0);
}
