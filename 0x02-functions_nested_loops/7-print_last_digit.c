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
	num = (-1) * num;
}
	l = num % 10;
	_putchar(l + '0');
	return (l);
}
