#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees memory allocate for the list
 * @head: - List to be freed
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
	free(head);
}
