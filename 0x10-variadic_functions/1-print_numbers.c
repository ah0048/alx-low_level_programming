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

	unsigned int i = n;

	va_start(args, n);
	while (i--)
	{
		printf("%d%s", va_arg(args, int),
				i ? (separator ? separator : "") : "\n");
	}
	va_end(args);
}
