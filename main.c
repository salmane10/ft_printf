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

int main() {
    // Test ft_putmem with a valid memory address
    int *ptr = NULL;
    ft_printf("Memory address: %p\In", (void*)&ptr);
	printf("memory address: %p\n", (void *)ptr);    
    // Test ft_putmem with a NULL pointer
    ft_printf("Memory address: %p\n", (void*)0);
    printf("memory address: %p\n", (void*)0);

    return 0;
}
*/
/*
#include "ft_printf.h"

int main()
{
    
    ft_printf("hello %w\n");
    printf("hello %w");
}
*/
/*
#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int x;
	int y;
	x = ft_printf("%u\n", 5799);
	y = printf("%u\n", 5799);
	printf("%d\n", x);
	printf("%d", y);
	return (0);
}
*/
/*#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int putchar(int c)
{
    return (write(1, &c, 1));
}
int putstr(char *s)
{
    int i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;    
    }
    return i;
}
int print(const char *s, ...)
{
    int i = 0;
    int count = 0;
    
    va_list args;
    va_start(args, s);
    while (s[i])
    {
        if (s[i] == '%')
        {
            i++;
            if (s[i] == 's')
            {
                count += putstr(va_arg(args, char *));
            }
        }
        else
            count += write(1, &s[i], 1);
        i++;
    }
    va_end(args);
    return (count);
}

int main()
{
    int x;
    char s[] = "world";
    x = print("hello %s", s);
    printf("\n%d", x);
    return (0);
}*/
