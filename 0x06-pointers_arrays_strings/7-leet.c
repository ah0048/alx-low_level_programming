#include "main.h"
/**
 * leet - reverse
 * @str: array
 * Return: encycrypting.
 */
char *leet(char *str)
{
	unsigned int i;

	char key[] = {'a', 'e', 'o', 't', 'l'};

	char ency[] = {4, 3, 0, 7, 1};

	int j;

	j = 0;
	while (str[j] != 0)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (str[j] == key[i] || str[j] == key[i] - 32)
			{
				str[j] = 48 + ency[i];
			}
		}
		j++;
	}
	return (str);

}
