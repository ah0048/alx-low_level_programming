#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
* main print last digit of a random number
* Return: always zero
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
if (last > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
if (last == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, last);
}
if (last < 6 && last != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
	return (0);
}
