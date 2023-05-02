#include "lists.h"
/**
 * add_nodeint - Adds node at the end of the linked list
 * @head: Head of the linked list
 * @n: Data to be added at in the linked list
 * Return: Pointer to the Singly linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head && n)
	{
		listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

		if (!newnode)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	return (0);
}
