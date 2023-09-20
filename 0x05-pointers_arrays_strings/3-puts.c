#include "main.h"
/**
 * _puts - writes the character c to stdout
 * @str: The character to print
 * Return: On success 1.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
