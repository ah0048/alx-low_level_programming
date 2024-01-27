#ifndef pragma
#define pragma
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct token - Struct op
 *
 * @token: The operator
 * @f: The function associated
 */
typedef struct token
{
	char *token;
	int (*f)(char *, va_list);
} token_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
