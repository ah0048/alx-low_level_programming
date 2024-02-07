#include "lists.h"
/**
 * get_nodeint_at_index - writes the character c to stdout
 * @head: The character to print
 * @index: index
 * Return: num
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *node;

	if (!head)
		return (NULL);
	node = head;
	if (node)
	for (i = 0; i < index; i++)
	{
		node = node->next;
	}
	return (node);
}
