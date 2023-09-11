#include <stdio.h>
/**
* main - entry point
* main prints alphabet in order in lower case
* Return: always zero
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		putchar('\n');
	letter++;
	}
return (0);
}
