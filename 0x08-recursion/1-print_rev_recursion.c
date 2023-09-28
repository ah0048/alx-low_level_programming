#include "main.h"
/**
 * _print_rev_recursion - writes the character c to stdout
 * @s: The string to print
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
	while (*s > '\0')
	{
		s++;
	}
	}
	_putchar(*s);
	s--;
	if (*s == '\n')
	{
		_putchar(*s);
		return;
	}
	_print_rev_recursion(s);
}
