#include "main.h"

char *str_res(char *src, int src_len)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * src_len);
	if (!str)
		return (NULL);

	while (src[i])
	{
		str[i] = src[i];
		i++;
	}

	return (str);
}
