#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth noe of a singly linked list
 * @head: Head of the linked list
 * @index: Index of the node
 * Return: nth node of the liked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int k = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (index == k)
		{
			return (k);
		}
		head = head->next;
		count++
	}
	return (NULL);
}
