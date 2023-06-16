#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int total = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		++total;
		h = h->next;
	};
	return (length);
}
