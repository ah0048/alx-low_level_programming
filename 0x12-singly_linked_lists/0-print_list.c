#include "lists.h"
/**
 * print_list - writes the character c to stdout
 * @h: The character to print
 *
 * Return: num
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		++num;
		printf("[%u] %s\n", h->len, (h->str ? h->str : "(nil)"));
		h = h->next;
	}
	return (num);
}
