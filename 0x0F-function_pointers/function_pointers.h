#ifndef _PRINT_
#define _PRINT_
void print_name(char *name, void (*f)(char*));
#endif
#ifndef _ARRAYIT__
#define _ARRAYIT__
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
