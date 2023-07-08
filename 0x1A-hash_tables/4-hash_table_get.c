#include <string.h>
#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *hd= NULL;

	if (!ht || !key)
		return (NULL);
	i = key_index((unsigned char *) key, ht->size);
	hd = ht->array[i];

	if (!hd)
	{
		return (NULL);
	}
	while (strcmp(key, hd->key) != 0)
	{
		hd = hd->next;
	}
	return (hd->value);
}
