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
#include <stdio.h>

int main()
{
   printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   return 0;
}
