#include "main.h"
/**
* print_alphabet_x10 -  prints alphabet from a to z in lowercase ten times
* Return: void
*/
void print_alphabet_x10(void)
{
	int ch, n;

	for (n = 1; n <= 10; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
