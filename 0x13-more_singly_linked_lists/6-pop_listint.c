#include "lists.h"
/**
 * pop_listint - Deletes the head node of a singly linked list
 * @head: Head of the singly linked list
 * Return: Head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *another_head;
	int value_in_head = 0;

	if (head)
	{
		another_head = (*head)->next;
		value_in_head = (*head)->n;
		free(*head);
		*head = another_head;
	}
	else
	{
		return (0);
	}
	return (value_in_head);
}
