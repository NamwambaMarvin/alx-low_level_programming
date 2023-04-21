#ifndef _PUTCHAR_
#define _PUTCHAR_
#include <string.h>
char _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
#ifndef _MAL_
#define _MAL_
void *malloc_checked(unsigned int b);
#endif
#ifndef _STN_
#define _STN_
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif
#ifndef _CAL_
#define _CAL_
void *_calloc(unsigned int nmemb, unsigned int size);
#endif
#ifndef _ARRAY_
#define _ARRAY_
int *array_range(int min, int max);
#endif
