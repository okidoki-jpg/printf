#include "main.h"

/**
 * c_printf - print char from va_arg for _printf.c
 * @args: va_list with character to print
 *
 * Return: number of chars printed
 */

int c_printf(va_list *args)
{
	char src = va_arg(*args, int);
	int len = sizeof(char);

	write(1, &src, len);
	return (len);
}
