#include "main.h"
/**
* print_sign -  checks for alphabetic character.
* @n: The character to print
* Return: 0 or 1 ot -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
