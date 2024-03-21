#include "lists.h"
/**
* print_dlistint - prints all elements of a double linked list
* @h: name of env var
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;

	size_t num = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		num += 1;
	}
	return (num);
}
