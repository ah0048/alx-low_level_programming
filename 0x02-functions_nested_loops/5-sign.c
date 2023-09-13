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
		_putchar(48);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
