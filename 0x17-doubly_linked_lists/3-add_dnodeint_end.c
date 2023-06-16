#include "lists.h"
/**
 * add_dnodeint_end - Addsa node at the end of a list
 * @head: Head of the singly lniked list
 * @n: Number of elements in a singly linked list
 * Return: Pointer to the head oof a singly linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
		return (new);
	}
	new->next =  *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
