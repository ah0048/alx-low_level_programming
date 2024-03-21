#include "lists.h"
/**
* dlistint_len - counts all elements of a double linked list
* @h: name of env var
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;

	size_t num = 0;

	while (current)
	{
		num += 1;
		current = current->next;
	}
	return (num);
}
