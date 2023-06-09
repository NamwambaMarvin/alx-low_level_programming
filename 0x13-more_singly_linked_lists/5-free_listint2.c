#include "lists.h"
/**
 * free_listint2 - Frees a linked list
 * @head: Head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head != NULL)
	{
		while (*head)
		{
			fr = *head;
			*head = (*head)->next;
			free(fr);
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = NULL;
}
