#include "lists.h"
/**
 * sum_dlistint - Sums ups all aelemtns of a linked list
 * @head: Head of the linked list
 * Return: Sum of all the elemts in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int total = 0;
	dlistint_t *temp = head;

	if (head != NULL)
	{
		while  (temp != NULL)
		{
			total += temp->n;
			temp = temp->next;
		}
	}
	return (total);
}
