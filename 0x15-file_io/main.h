#ifndef _PROTS
#define _PROTS
#include <unistd.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <sys/uio.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
void copy(char *source, char *destination);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
