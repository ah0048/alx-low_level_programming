#include <stdio.h>
/**
* main - entry point
* main print saize of each type of variable
* Return: always zero
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
}

