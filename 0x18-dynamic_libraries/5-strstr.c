#include <stdio.h>
#include "main.h"
/**
* _strstr -  function fills the first n bytes of the memory area pointed
* @haystack: array
* @needle: value
* Return: value of *s
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i + j] || needle[j] == '\0'; j++)
		{
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
