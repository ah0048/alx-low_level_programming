#include "lists.h"
/**
 * list_len - writes the character c to stdout
 * @h: The character to print
 *
 * Return: num
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
