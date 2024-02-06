#include "lists.h"
/**
 * add_nodeint_end - writes the character c to stdout
 * @head: The character to print
 * @n: string
 * Return: num
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	listint_t *node = *head;

	if (!newnode || !head)
	{
		return (NULL);
	}
	newnode->n = n;
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	return (newnode);
}
