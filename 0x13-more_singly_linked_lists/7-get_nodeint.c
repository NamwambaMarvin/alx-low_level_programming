#include "lists.h"
#include <stddef.h>
/**
 * get_nodeint_at_index - Returns the nth noe of a singly linked list
 * @head: Head of the linked list
 * @index: Index of the node
 * Return: nth node of the liked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t k = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (index == k)
		{
			return (head);
		}
		head = head->next;
		k++;
	}
	return (NULL);
}
