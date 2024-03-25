#include "main.h"
/**
* _isalpha -  checks for alphabetic character.
* @c: The character to print
* Return: zero or one
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
	return (0);
}
