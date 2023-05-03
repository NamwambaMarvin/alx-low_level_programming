#include "lists.h"
#include <stddef.h>
/**
 * insert_nodeint_at_index - Inserts node at index
 * @head: pointer to the head of the linked list
 * @idx: - Index at which elemt is to be inserted
 * @n: Number to be inserted at the index.
 * Return: Pointer to the head of the lised list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t j = 1;
	listint_t *Nnode, *ptr;

	if (head == NULL)
		return (NULL);
	Nnode = (listint_t *)malloc(sizeof(listint_t));
	if (!Nnode)
		return (NULL);
	Nnode->n = n;
	ptr = *head;
	if (idx > 0)
	{
		while (ptr)
		{
			if (j == idx)
			{
				Nnode->next = ptr->next;
				ptr->next = Nnode;
				return (Nnode);
			}
			ptr = ptr->next;
			j++;
		}
	}
	else
	{
		Nnode->next = *head;
		*head = Nnode;
		return (Nnode);
	}

	return (NULL);
}
