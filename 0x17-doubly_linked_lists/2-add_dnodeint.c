#include "lists.h"
/**
 * add_dnodeint - Ads a node at the beginning of the lsit
 * @head: head of the d linked list
 * @n: Number of elements in the singly linked list
 * Return: Head of the doubly linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head)
	{
		new->prev = (*head)->prev;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (*head);
	}
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
