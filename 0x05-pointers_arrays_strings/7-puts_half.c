#include "main.h"
/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	if (i % 2 != 0)
	{
		j = (i - 1) / 2;
	}
	while (j <= i)
	{
		if (str[j] != '\0')
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
