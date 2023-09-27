#include "main.h"
/**
* _strstr -  function fills the first n bytes of the memory area pointed
* @haystack: array
* @needle: value
* Return: value of *s
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
