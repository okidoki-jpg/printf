#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned int ui;
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);             printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
}
