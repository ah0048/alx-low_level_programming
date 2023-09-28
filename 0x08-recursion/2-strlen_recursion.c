#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - writes the character c to stdout
 * @s: The string to print
 * Return: integer.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return ('\0');
}
