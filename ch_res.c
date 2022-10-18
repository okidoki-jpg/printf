#include "main.h"

int _cprintf(int src)
{
	int len = sizeof(char);

	write(1, &src, len);
	return (len);
}
