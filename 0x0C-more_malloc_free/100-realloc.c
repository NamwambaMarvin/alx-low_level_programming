#include "main.h"
/**
 * _realloc - Implementations of realloc
 * @ptr: Pointer to the old memory
 * @old_size: Size of old allocated data
 * @new_size: Size of newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	} else if (!ptr)
	{
		return (malloc(new_size));
	} else if (new_size <= old_size)
	{
		return (ptr);
	} else
	{
		void *new_pointer = malloc(new_size);
		assert((ptr) && (new_size > old_size));
		if (new_pointer)
		{
			memcpy(new_pointer, ptr, old_size);
			free(ptr);
		}
		return (new_pointer);
	}
}
