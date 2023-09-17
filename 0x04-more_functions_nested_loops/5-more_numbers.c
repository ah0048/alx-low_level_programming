#include "main.h"
/**
 * more_numbers - writes numbers
 * Return: void
 */
void more_numbers(void)
{
	int n, i;

	for (i = 1; i <= 10; i++)
	{
	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
		{
			_putchar('0' + n / 10);
		}
		_putchar('0' + n % 10);
	}
	_putchar('\n');
	}
}
