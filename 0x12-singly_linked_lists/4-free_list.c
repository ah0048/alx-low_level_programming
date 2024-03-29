#include "lists.h"
/**
 * free_list - writes the character c to stdout
 * @head: The character to print
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *newnode;

	if (!head)
		return;
	node = head;
	while (node)
	{
		newnode = node->next;
		free(node->str);
		free(node);
		node = newnode;
	}
}
