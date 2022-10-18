#include "main.h"

/**
 * _printf - Entry Point
 * @format: list of arg types
 *
 * Return: length of output
 */

int _printf(const char *format, ...)
{
	int len = 0, i = 0;
	va_list args;

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
						len += int_res(va_arg(args, int));
						break;
					case 'c':
						len += ch_res(va_arg(args, int));
						break;
					case '%':
						len += _putchar(format[i]);
						break;
					case 's':
						len += str_res(va_arg(args, char *));
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
