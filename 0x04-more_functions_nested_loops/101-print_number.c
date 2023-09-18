#include "main.h"
/**
 * print_number - writes line
 * @n : number
 * Return: void
 */
void print_number(int n)
{
	int temp, num_digits, divisor, digit, i;

	if (n < 0)
	{
	_putchar('-');
	n *= -1;
	}

	if (n == 0)
	{
	_putchar('0');
	return;
	}
	temp = n;
	num_digits = 0;
	while (temp != 0)
	{
	temp /= 10;
	num_digits++;
	}

	while (num_digits > 0)
	{
		divisor = 1;

	for (i = 1; i < num_digits; i++)
	{
	divisor *= 10;
	}

	digit = n / divisor;

	_putchar(digit + '0');
	n %= divisor;
	num_digits--;
	}
}
