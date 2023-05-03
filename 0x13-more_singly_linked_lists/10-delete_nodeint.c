#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at specified index
 * @head: Pointer to the head of a linked list
 * @index: Inde to be deleted
 * Return: Pointer to the head of the linked list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t m = 1;

	ptr = *head;
	u = *head;
	listint_t *ptr, *u;

	if (!head)
	{
		return (-1);
	}
	if (!index)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (u)
	{
		if (m == index)
		{
			ptr = u->next;
			u->next = ptr->next;
			free(ptr);
			return (1);
		}
		u = u->next;
		m++;
	}
	return (-1);
}
