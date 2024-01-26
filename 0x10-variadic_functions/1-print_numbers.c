#include "variadic_functions.h"
/**
 * print_numbers - prints name
 * @separator: name
 * @n: number
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
		{
			if (separator)
				printf("%s", separator);
			printf(" ");
		}
	}
	printf("\n");
	va_end(args);
}
