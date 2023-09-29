#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - writes the character c to stdout
 * @n: The number
 * @val: root
 * Return: integer.
 */
int sqr(int n, int val);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - writes the character c to stdout
 * @n: The number
 * @val: root
 * Return: integer.
 */
int sqr(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (sqr(n, val + 1));
	}
	else
		return (-1);
}
