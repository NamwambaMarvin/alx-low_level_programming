#ifndef _LK
#define _LK
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
/**
 * struct list_s - Singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: Pointes to the next node
 * Description: Singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
#endif
#ifndef _LI
#define _LI
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void exec(void) __attribute__ ((constructor));
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
