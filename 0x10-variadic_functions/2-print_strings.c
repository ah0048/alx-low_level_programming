#include "variadic_functions.h"
/**
 * print_strings - prints name
 * @separator: name
 * @n: number
 * Return: sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;

	va_list args;

	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	while (i--)
	{
		printf("%s%s", (str = va_arg(args, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(args);
}
