#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a node to the linked list
 * @head: Pointer to a pointer on the head of the list
 * @str: Data to be added
 * Return: pinter to the allocated node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (str)
	{
		list_t *loc;
		list_t *new_node = (list_t *)malloc(sizeof(list_t));

		if (!new_node)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;
		if (!(*head))
		{
			*head = new_node;
			return (*head);
		}
		loc = *head;
		while (loc->next)
			loc = loc->next;
		loc->next = new_node;
		return (loc);
	}
	return (NULL);
}
