#include <stdio.h>
/**
* main - entry point
* main prints alphabet in order in lower case except for q and e
* Return: always zero
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
return (0);
}
