#include "stdio.h"
#include "main.h"
/**
* _strspn -  function fills the first n bytes of the memory area pointed
* @s: array
* @accept: value
* Return: value of *s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, tmp;

	j = 0;
	tmp = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
		if (s[i] == accept[j])
		{
			if (i > tmp)
			{
			tmp = i;
			}
			break;
		}
		}
	}
	tmp++;
	return (tmp);
}
