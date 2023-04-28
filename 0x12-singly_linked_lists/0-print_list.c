#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints a linked list
 * @h: Linked list to be printed
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	unsigned int number = 0;

	while (p != NULL)
	{
		if (!(p->str))
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", p->len, p->str);
		}
		number++;
		p = p->next;
	}
	return (number);
}
