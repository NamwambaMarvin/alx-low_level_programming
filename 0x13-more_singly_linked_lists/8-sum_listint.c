#include "lists.h"
/**
 * sum_listint - Sums all the elements in a linked kist
 * @head: Head of the linked list
 * Return: Sum of the elements.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += (head->n);
		head = head->next;
	}
	return (sum);
}
