#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds a node to the linked list
 * @head: Pointer to a pointer on the head of the list
 * @str: Data to be added
 * Return: pinter to the allocated node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
