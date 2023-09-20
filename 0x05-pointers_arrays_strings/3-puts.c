#include "main.h"
/**
 * _puts - writes the character c to stdout
 * @str: The character to print
 * Return: On success 1.
 */
void _puts(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		_putchar(str[j]);
	}
}
