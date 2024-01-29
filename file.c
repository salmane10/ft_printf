#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/*
int putchar(int c)
{
    return (write(1, &c, 1));
}*/
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
}