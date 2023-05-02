#include "lists.h"
/**
 * listint_len - Display the length of the list
 * @h: Singly linked list to be printed
 * Return: Nuumber of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
