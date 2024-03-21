#include "lists.h"
/**
* delete_dnodeint_at_index - deletes a node at an index
* @head: head pointer
* @index: index to be deleted
* Return: 1 on success and -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	unsigned int num = 0;

	if (*head == NULL)
		return (-1);

	while (current != NULL)
	{
		if (num == index)
		{
			if (index == 0)
			{
				if (current->next)
					current->next->prev = NULL;
				*head = current->next;
				free(current);
				return (1);
			}
			if (current->next)
				current->next->prev = current->prev;
			if (current->prev)
				current->prev->next = current->next;
			free(current);
			return (1);
		}
		num = num + 1;
		current = current->next;
	}
	return (-1);
}
