#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - writes the character c to stdout
 * @x: The number
 * @y: power
 * Return: integer.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
