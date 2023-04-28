#include <stdio.h>
#include "lists.h"
/**
 * list_len - Prints a linked list
 * @h: Linked list to be printed
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	unsigned int number = 0;

	while (p != NULL)
	{
		number++;
		p = p->next;
	}
	return (number);
}
