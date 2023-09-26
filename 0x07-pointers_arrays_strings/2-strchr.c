#include "main.h"
/**
* _strchr -  function fills the first n bytes of the memory area pointed
* @s: array
* @c: value
* Return: value of *s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');


}
