/*#include <stdio.h>

int main()
{
	char *x = "this is me";
	printf("hello pointer : %p" , x);
}*/

/*void my_printf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == 'p') {
                void* pointer = va_arg(args, void*);
                printf("%p", pointer);
            }
        }
        else {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
}*/
	//char c = 'c';
	//char *p;
	//p = &c;
	//my_printf("hello the pointer is : %p\n", c);
	//my_printf("hello the pointer is : %p\n", p);
	
/* printf example */
/*

int main()
{
	char *p;
	int x = printf("%p", p);
	int y = printf("\n%i", x);
	printf("\n%i\n", y);
	return (0);
}*/
/*
#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int x;
    int y;
    x = ft_printf("%d", -2147483648);
    y = printf("%d", -2147483648);
    ft_printf("\n%d", x);
    ft_printf("\n%d", y);
}
*/
