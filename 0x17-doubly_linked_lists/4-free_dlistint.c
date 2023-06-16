#include "lists.h"
/**
 * free_dlistint - Frees a dlist
 * @head: Head of a d linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next = NULL;

	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
