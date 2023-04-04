#ifndef _MEMSET_
#define _MEMSET_

char *_memset(char *s, char b, unsigned int n);

#endif
#ifndef _MEMCPY_
#define _MEMCPY_

char *_memcpy(char *dest, char *src, unsigned int n);

#endif
#ifndef _FIND_
#define _FIND_

unsigned int _strspn(char *s, char *accept);

#endif
#ifndef _LOCATE_
#define _LOCATE_

char *_strchr(char *s, char c);

#endif
#ifndef _STRBRK_
#define _STRBRK_

char *_strpbrk(char *s, char *accept);

#endif
#ifndef _SUBSTRING_
#define _SUBSTRING_

char *_strstr(char *haystack, char *needle);

#endif

#ifndef _CHESS_
#define _CHESS_

void print_chessboard(char (*a)[8]);

#endif

#ifndef _MULTIPLY_
#define _MULTIPLY_

void print_diagsums(int *a, int size);

#endif
