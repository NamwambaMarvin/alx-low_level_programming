#include "lists.h"
/**
 * dlistint_len - Calculates the the length of a g linked list
 * @h: - Linked list whose length is to be calculated
 * Return: Length of a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int total = 0;

	while (h != NULL)
	{
		++total;
		h = h->next;
	}
	return (total);
}
