#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - writes the character c to stdout
 * @n: The number
 * @val: root
 * Return: integer.
 */
int check(int n, int val);
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
 * check - writes the character c to stdout
 * @n: The number
 * @val: root
 * Return: integer.
 */
int check(int n, int val)
{
	if (val >= n && n > 1)
	{
		return (1);
	}
	else if (n % val == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (check(n, val + 1));
}
