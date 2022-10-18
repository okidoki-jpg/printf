#include "main.h"

int str_res(char *src)
{
	int len = _strlen(src);
	write(1, src, len);
	return (len);
}
