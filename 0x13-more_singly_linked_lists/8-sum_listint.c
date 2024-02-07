#include "lists.h"
/**
 * sum_listint - writes the character c to stdout
 * @head: The character to print
 * Return: num
 */
int sum_listint(listint_t *head)
{
	listint_t *node;

	int sum = 0;

	node = head;
	if (!head || !node)
		return (0);
	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
