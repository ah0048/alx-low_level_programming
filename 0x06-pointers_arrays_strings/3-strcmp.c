#include "main.h"
/**
 * _strcmp - writes the character c to stdout
 * @s1: destination
 * @s2: source
 * Return: dest.
 */
int _strcmp(char *s1, char *s2)
{
	int sum;

	sum = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			sum = (int)*s1 - (int)*s2;
			break;
		}
		s1++;
		s2++;
	}
	return (sum);
}
