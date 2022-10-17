#include "main.h"

/**
 * _printf - Entry Point
 * @format: list of arg types
 *	
 *	Return: length of output
 */

int _printf(const char *format, ...)
{
	char *src, *str, *schar, s;
	int len, i = 0, n, tmp, outlen = 0;
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
					n = va_arg(valist, int);
					for (tmp = n; tmp > 0; tmp /= 10)
						len++;
					schar = int_res(n, len);
					write(1, schar, len);
					free(schar);
					i++;
					break;
				case 'c':
					s = va_arg(valist, int);
					schar = ch_res(s, 1);
					write(1, schar, 1);
					free(schar);
					i++;
					break;
				case 's':
					src = va_arg(valist, char *);
					if (!src)
						src = "(nil)";
					while (src[len])
					{
						len++;
					}

					str = str_res(src, len);
					write(1, str, len);
					free(str);
					i++;
			}
			outlen += len;
		}
		else
		{
			schar = ch_res(format[i], 1);
			write(1, schar, 1);
			free(schar);
			outlen++;
		}
		i++;
	}

	va_end(valist);
	return (outlen);
}

int alpha(int ch)
{
	if ((ch > 64 && ch < 91) || (ch > 96 && ch < 123))
		return (1);
	return (0);
}
