#ifndef _LK
#define _LK
#include <stddef.h>
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
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
