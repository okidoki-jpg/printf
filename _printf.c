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
	int len = 0, i;
	va_list args;
	t_c func[] = {
		{"c", c_printf}, {"s", s_printf}, {"%", m_printf},
		{"i", i_printf}, {"d", i_printf}, {"b", b_printf},
		{"u", u_printf}, {"o", o_printf}, {"x", x_printf},
		{"X", X_printf}, {"r", r_printf}, {"R", rot_printf}
	};

	if (!format || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			if (f_id(*(format + 1)))
			{
				i = 0;
				while (*func[i].type)
				{
					if (*(format + 1) == *func[i].type)
					{
						len += func[i].f(&args);
						format++;
						break;
					}
					i++;
				}
			}
			else if (*(format + 1) == '\0')
				return (-1);
		}
		else
			len += _putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
