#ifndef header
#define header

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _strdigit(char *s);
void _puts(char *s);
void rev_num_str(int start, int end, char *ns);
int _strlen(char *s);
char *strmul(char *a, char *b);

#endif
