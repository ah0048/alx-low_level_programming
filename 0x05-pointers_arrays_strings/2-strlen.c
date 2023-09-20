#include "main.h"
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 * Return: On success 1.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
