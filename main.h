#ifndef _main_h_
#define _main_h_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef unsigned int _ui;
int c_printf(char src);
int s_printf(char *src);
int i_printf(int src);
int b_printf(_ui src);
int u_printf(_ui src);
int _putchar(char ch);
int _printf(const char *format, ...);
int _strlen(char *str);
int f_id(char ch);

#endif /* _main_h_ */
