#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the node at a given index
 * @head: Head of the linked list
 * @index: Index at wc the noe is located
 * Return: Element at a given node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int counter = 0;

	if (head)
	{
		while (temp)
		{
			if (counter == index)
			{
				return (temp);
			}
			temp = temp->next;
			++counter;
		}
	}
	return (NULL);
}
