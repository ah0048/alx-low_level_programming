#include "main.h"
/**
* print_alphabet -  prints alphabet from a to z in lowercase
* Return: void
*/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
