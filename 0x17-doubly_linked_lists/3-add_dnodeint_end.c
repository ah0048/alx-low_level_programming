#include "lists.h"
/**
* add_dnodeint_end - adds a node at the end of double linked list
* @head: head pointer
* @n: value to be added
* Return: address of new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	dlistint_t *current = *head;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (current->next)
		current = current->next;
	newNode->prev = current;
	newNode->next = NULL;
	current->next = newNode;
	return (newNode);
}
