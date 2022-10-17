#ifndef _main_h_
#define _main_h_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(int ch);
char *ch_res(char src, int src_len);
char *str_res(char *src);
char *int_res(int src);
int f_id(char ch);
int _printf(const char *format, ...);
int _strlen(char *str);

#endif /* _main_h_ */
