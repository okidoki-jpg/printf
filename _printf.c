#include "main.h"

/**
 * _printf - Print given string by relevant type
 * @format: formated string with format specifier placeholders
 * @...: variable arguments
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int len = 0, i = 0;
	va_list args;

	if (!format || (*format == '%' && !*(format + 1)))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (f_id(format[i + 1]))
			{
				switch (format[i + 1])
				{
					case 'd':
					case 'i':
						len += i_printf(va_arg(args, int));
						break;
					case 'c':
						len += c_printf(va_arg(args, int));
						break;
					case '%':
						len += _putchar(format[i]);
						break;
					case 's':
						len += s_printf(va_arg(args, char *));
						break;
					case 'b':
						len += b_printf(va_arg(args, _ui));
						break;
					case 'u':
						len += u_printf(va_arg(args, _ui));
						break;
					case 'o':
						len += o_printf(va_arg(args, _ui));
						break;
					case 'x':
						len += x_printf(va_arg(args, _ui));
						break;
					case 'X':
						len += X_printf(va_arg(args, _ui));
						break;
					case 'R':
						len += rot_printf(va_arg(args, char *));
						break;

				}
				i++;
			}
			else
				i++;
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (len);
}
