#include "main.h"

int rot_printf(va_list *args)
{
	char ch, *src = va_arg(*args, char *);
	int len = _strlen(src);

	while (*src)
	{
		if ((*src > 'm' && *src < 'z' + 1)|| 
			(*src > 'M' && *src < 'Z' + 1))
		{
			ch = *(src) - 13;
		}
		else if ((*src > 'a' - 1 && *src < 'n')|| 
				(*src > 'A' - 1 && *src < 'N'))
		{
			ch = *(src) + 13;
		}
		else
			ch = *src;
		write(1, &ch, 1);
		src++;
	}
	return (len);
}
