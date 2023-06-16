#include "lists.h"
/**
 * print_dlistint - Prints elements of a linked list
 *
 * @h: Linked list to be printed
 * Return: Length of the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++total;
		h = h->next;
	};
	return (total);
}
