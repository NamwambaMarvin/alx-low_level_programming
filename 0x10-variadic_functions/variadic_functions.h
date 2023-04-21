#ifndef _STDARG_
#define _STDARG_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#endif
#ifndef _PUTCHAR_
#define _PUTCHAR_
int _putchar(char c);
#endif
#ifndef _SUM_
#define _SUM_
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
