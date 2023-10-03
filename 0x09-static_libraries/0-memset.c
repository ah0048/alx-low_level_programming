#include "main.h"
/**
* _memset -  function fills the first n bytes of the memory area pointed
* @s: array
* @b: value
* @n: number of bytes
* Return: value of *s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
