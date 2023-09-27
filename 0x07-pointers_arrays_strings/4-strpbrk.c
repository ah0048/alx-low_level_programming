#include "main.h"
/**
* _strpbrk -  function fills the first n bytes of the memory area pointed
* @s: array
* @accept: value
* Return: value of *s
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
