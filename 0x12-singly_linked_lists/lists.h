#ifndef _LK
#define _LK
int _putchar(char c);
size_t print_list(const list_t *h);
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
