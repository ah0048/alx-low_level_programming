#include <stdio.h>
/**
* main - entry point
* main prints alphabet in order in lower case
* Return: always zero
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
return (0);
}
