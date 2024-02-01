#include "ft_printf.h"

int main()
{
    char *str = "%w%%%";
    int i,j;
    i = ft_printf(str);
    printf("\n");
    j = printf(str);
    printf("\n %d %d", i, j);
}