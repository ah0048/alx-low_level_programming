#include "main.h"
/**
* times_table -  prints last digit.
* Return: void
*/
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		_putchar('0' + j);
		for (n = 1; n <= 9; n++)
		{
			j = j + i;
			if (n != 9)
			{
			if (j <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + j);
			}
			else
			{
				_putchar(','), _putchar(' ');
				_putchar('0' + (j / 10)), _putchar('0' + (j % 10));
			}
			}
			else
			{
				if (j <= 9)
				{
					_putchar(','), _putchar(' '), _putchar(' ');
					_putchar('0' + j);
				}
				else
				{
					_putchar(','), _putchar(' ');
					_putchar('0' + (j / 10)), _putchar('0' + (j % 10));
				}
			}
		}
		_putchar('\n');
	}
}
