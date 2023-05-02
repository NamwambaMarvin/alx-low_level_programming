#include "lists.h"
/**
 * print_listint - Prints a linked list
 * @h: List to be printed
 * Return: nuummber of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int tnumber = 0;

	while (h)
	{
		printf("%d\n", h->n);
		tnumber++;
		h = h->next;
	}
	return (tnumber);
}
