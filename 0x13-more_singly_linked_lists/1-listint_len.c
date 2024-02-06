#include "lists.h"
/**
 * listint_len - writes the character c to stdout
 * @h: The head
 *
 * Return: num
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
