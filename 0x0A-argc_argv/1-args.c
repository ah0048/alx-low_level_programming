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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
