#include "main.h"
/**
* _memcpy -  function fills the first n bytes of the memory area pointed
* @dest: array
* @src: value
* @n: number of bytes
* Return: value of *s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
