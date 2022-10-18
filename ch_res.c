#include "main.h"

int ch_res(int src)
{
	int len = sizeof(char);
	write(1, &src, len);
	return (len);
}
