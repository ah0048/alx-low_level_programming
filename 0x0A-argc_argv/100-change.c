#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - writes program name
 * @argc: count
 * @argv: pointer to strings
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, sum, ch;

	int a[] = {25, 10, 5, 2, 1};

	sum = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	ch = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		while (ch % a[i] == 0 && ch != 0)
		{
			sum++;
			ch = ch - a[i];
		}
		while (ch >= a[i])
		{
			sum++;
			ch = ch - a[i];
		}		
	}
	printf("%d\n", sum);
	return (0);
}
