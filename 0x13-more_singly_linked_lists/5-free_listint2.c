#include "lists.h"
/**
 * free_listint2 - writes the character c to stdout
 * @head: The character to print
 * Return: num
 */
void free_listint2(listint_t **head);
{
	listint_t *node, *newnode;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		newnode = node->next;
		free(node);
		node = newnode;
	}
	*head = NULL;
}
