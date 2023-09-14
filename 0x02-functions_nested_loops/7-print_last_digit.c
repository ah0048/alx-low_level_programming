#include "main.h"
/**
* print_last_digit -  prints last digit.
* @num: The number to print
* Return: last digit
*/
int print_last_digit(int num)
{
	int l;

if (num < 0)
{
	l = -1 * (num % 10);
}
else
{
	l = num % 10;
}
	_putchar(l + '0');
	return (l);
}
