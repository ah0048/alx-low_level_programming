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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[argc - 1]) * atoi(argv[argc - 2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
