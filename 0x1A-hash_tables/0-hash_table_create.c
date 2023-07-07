#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: Size of the hash table
 * Return: Pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx = 0;
	hash_node_t **aray = NULL;
	hash_table_t *htab = NULL;

	htab = malloc(sizeof(hash_table_t));
	if (!htab)
	{
		return (NULL);
	}
	aray = malloc(sizeof(hash_node_t *) * size);
	if (!aray)
	{
		return (NULL);
	}
	for (; idx < size; ++idx)
	{
		aray[idx] = NULL;
	}
	htab->size = size;
	htab->array = aray;
	return (htab);
}
