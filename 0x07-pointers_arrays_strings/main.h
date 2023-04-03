#ifndef _MAIN_
#define _MAIN_
#include <stdio.h>
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
int get_first_occurrence (char* s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
unsigned int _get_str_len(char* c);
int compare(const char *X, const char *Y);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
#endif /* !_MAIN_ */
