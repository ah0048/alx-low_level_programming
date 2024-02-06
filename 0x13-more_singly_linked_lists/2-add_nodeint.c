#include "lists.h"
/**
 * add_nodeint - writes the character c to stdout
 * @head: The head
 * @n: data
 * Return: num
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		exit(-1);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
