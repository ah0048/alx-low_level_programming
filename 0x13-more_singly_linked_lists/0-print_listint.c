#include "lists.h"
/**
 * print_listint - writes the character c to stdout
 * @h: The head
 *
 * Return: num
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
