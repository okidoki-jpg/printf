#include "main.h"

char *ch_res(char src, int src_len)
{
	char *str;

	str = malloc(sizeof(char) * src_len);
	if (!str)
		return (NULL);

	*str = src;
	return (str);
}
