#include "lists.h"
/**
 * add_nodeint_end - Adds node at the end of the linked list
 * @head: Head of the linked list
 * @n: Data to be added at in the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (head && n)
	{
		listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
		listint_t *new;
		if (!newnode)
			return (NULL);
		newnode->n = n;
		newnode->next = NULL;
		if ((*head) == NULL)
		{
			*head = newnode;
			return (*head);
		}
		new = *head;
		while (new->next)
			new = new->next;
		new->next = newnode;
		return (new);
	}
	return (NULL);
}
