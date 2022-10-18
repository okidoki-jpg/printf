#include "main.h"

int rot_printf(char *src)
{
	int len = 0;
	char ch;

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
		len++;
	}
	return (len);
}
