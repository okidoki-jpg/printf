#include "main.h"

/**
 * _printf - Entry Point
 * @format: list of arg types
 *	
 *	Return: length of output
 */

int _printf(const char *format, ...)
{
	char *str;
	int len, i = 0, n, outlen = 0;
	va_list valist;

	va_start(valist, format);
	while (format[i])
	{
		len = 0;
		if (format[i] == '%' && alpha(format[i + 1]))
		{
			switch (format[i + 1])
			{
				case 'd':
				case 'i':
					str = int_res(va_arg(valist, int));
					len = _strlen(str);
					write(1, str, len);
					free(str);
					outlen += len;
					i++;
					break;
				case 'c':
					n = va_arg(valist, int);
					_putchar(n);
					outlen++;
					i++;
					break;
				case 's':
					str = str_res(va_arg(valist, char *));
					len = _strlen(str);
					write(1, str, len);
					free(str);
					outlen += len;
					i++;
			}
		}
		else
		{
			n = format[i];
			_putchar(n);
			outlen++;
		}
		i++;
	}

	va_end(valist);
	return (outlen);
}

