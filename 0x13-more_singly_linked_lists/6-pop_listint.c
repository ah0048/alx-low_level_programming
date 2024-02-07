#include "lists.h"
/**
 * pop_listint - writes the character c to stdout
 * @head: The character to print
 * Return: num
 */
int pop_listint(listint_t **head)
{
	listint_t *node;

	int n;

	if (!head || !*head)
	{
		return (0);
	}
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
