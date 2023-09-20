#include "main.h"
/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;

	char temp;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}
