#include "main.h"
/**
 * _print_rev_recursion - writes the character c to stdout
 * @s: The string to print
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
