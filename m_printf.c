#include "main.h"

/**
 * m_printf - print modulus operator for _printf.c
 * @args: va_list
 *
 * Return: number of chars printed
 */

int m_printf(va_list *args)
{
	(void) args;
	write(1, "%", 1);
	return (1);
}
