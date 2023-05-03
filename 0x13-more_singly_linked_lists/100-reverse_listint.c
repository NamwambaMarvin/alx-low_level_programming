#include "lists.h"
/**
 * reverse_listint - Reverses a linked list
 * @head: Head of the linked list
 * Return: Pointer to the head of the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back, *forward;

	back = NULL;
	forward = NULL;

	if (head)
	{
		while (*head != NULL)
		{
			forward = *head;
			*head = (*head)->next;
			forward->next = back;
			back = foward;
		}
		*head = back;
		return (*head);
	}
	return (NULL);
}
