#include "lists.h"
/**
* get_dnodeint_at_index - gets node aat index
* @head: head pointer
* @index: index
* Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	unsigned int num = 0;

	while (current)
	{
		if (num == index)
			return (current);
		current = current->next;
		num += 1;
	}
	return (NULL);
}
