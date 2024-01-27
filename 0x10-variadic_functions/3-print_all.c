#include "variadic_functions.h"
/**
 * print_all - prints name
 * @format: name
 * Return: sum
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;

	char *str;

	char current;

	va_start(args, format);
	while (format[i])
	{
		current = format[i++];
			switch (current)
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%i", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					{
					str = va_arg(args, char *);
					printf("%s", str ? str : "(nil)");
					}
					break;
				default:
					continue;
			}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
