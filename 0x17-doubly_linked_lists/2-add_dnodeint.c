#include "lists.h"
/**
* add_dnodeint - adds a node at the beginning of double linked list
* @head: head pointer
* @n: value to be added
* Return: address of new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	dlistint_t *current = *head;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = current;
	if (current != NULL)
		current->prev = newNode;
	*head = newNode;
	return (newNode);
}
