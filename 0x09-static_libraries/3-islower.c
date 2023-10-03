#include "main.h"
/**
* _islower -  prints alphabet from a to z in lowercase ten times
* @c: The character to print
* Return: zero or one
*/
int _islower(int c)
{
		if (c >= 97 && c <= 122)
			return (1);
		return (0);
}
