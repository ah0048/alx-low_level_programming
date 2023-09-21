#include "main.h"
/**
 * _strcmp - writes the character c to stdout
 * @s1: destination
 * @s2: source
 * Return: dest.
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum;
i = 0;
sum = 0;
	while (*s1 != '\0' && *s1 == *s2)
	{
	       s1++;
	       s2++;
	       i++;
	}
	sum = (int)*s1 - (int)*s2; 
	return (sum);
}
