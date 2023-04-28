#include <stdio.h>
#include <lists.h>
/**
 * print_list - Prints a linked list
 * @h: Linked list to be printed
 * Return: Number of nodes
 */
long unsigned int print_list(const list_t *h)
{
	const list_t *p = h;
	unsigned int number;
	while(p != NULL)
	{
		if (!(p -> str))
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", p->len, p->str);
		}
		p = p -> next;
		number++;
	}
	return (number);
}
