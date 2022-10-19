#ifndef _main_h_
#define _main_h_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef unsigned int _ui;
typedef struct type_convert
{
	char *type;
	int (*f)(va_list *args);
}t_c;

int _printf(const char *format, ...);
int _putchar(char ch);
int _strlen(char *str);
int f_id(char ch);
int s_printf(va_list *args);
int c_printf(va_list *args);
/*int m_printf(va_list *args);
int i_printf(va_list *args);
int b_printf(va_list *args);
int u_printf(va_list *args);
int o_printf(va_list *args);
int x_printf(va_list *args);
int X_printf(va_list *args);
int rot_printf(va_list *args);
*/
#endif /* _main_h_ */
