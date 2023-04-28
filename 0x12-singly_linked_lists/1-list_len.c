#include <stdio.h>
#include "lists.h"
/**
 * print_len - Prints a linked list
 * @h: Linked list to be printed
 * Return: Number of nodes
 */
size_t print_len(const list_t *h)
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
