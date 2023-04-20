#ifndef _STRUCT_
#define _STRUCT_
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif
#ifndef _STR_
#define _STR_
#include <stdlib.h>
#include <stdio.h>
int (*get_op_func(char *s))(int, int);
#endif
#ifndef _OPERATION_
#define _OPERATION_
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif
