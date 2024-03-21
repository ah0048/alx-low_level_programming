#include "lists.h"
/**
* sum_dlistint - sum of the list's data
* @head: head pointer
* Return: sum of data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	int sum = 0;

	if (head == NULL)
		return (0);
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
