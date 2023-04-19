#ifndef _SIZE_
#define _SIZE_
#include <stdlib.h>
#endif
#ifndef _PRINT_
#define _PRINT_
void print_name(char *name, void (*f)(char*));
#endif
#ifndef _ARRAYIT_
#define _ARRAYIT_
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
#ifndef _PUTCHAR_
#define _PUTCHAR_
int _putchar(char c);
#endif
#ifndef _SEARCH_
#define _SEARCH_
int int_index(int *array, int size, int (*cmp)(int));
#endif
