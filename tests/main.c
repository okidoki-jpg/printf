#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    char *str = "Let's try to printf a simple sentence.";
	unsigned int ui;
	int len;
    int len2;

    len = _printf("Let's %try % to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
	
	ui = (unsigned int)INT_MAX + 1024;
	len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
	_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Str Rev: %r\n", str);
    _printf("Rot13: %R\n", str);
	_printf("%b\n", 98);
    return (0);
}
