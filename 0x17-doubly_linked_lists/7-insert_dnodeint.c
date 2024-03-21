#include "lists.h"
/**
* insert_dnodeint_at_index - adds a node at an index of double linked list
* @h: head pointer
* @idx: index to be added at
* @n: data to be added
* Return: address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;

	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	unsigned int num = 0;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	while (current)
	{
		if (num == idx)
		{
			newNode->next = current;
			newNode->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = newNode;
			current->prev = newNode;
			return (newNode);
		}
		num = num + 1;
		current = current->next;
	}
	if (num == idx)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	return (NULL);
}
