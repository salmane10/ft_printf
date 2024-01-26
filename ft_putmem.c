#include "ft_printf.h"

static	int print_address(unsigned long x)
{
	int	counter;
	char	*s;

	s = "0123456789abcdef";
	counter = 0;
	if (x < 16)
		counter += ft_putchar(s[x]);
	else
	{
		counter += print_address(x / 16);
		counter += ft_putchar(s[x % 16]);
	}
	return (counter);
}

int	ft_putmem(void *p)
{
	int count;
	unsigned long	x;

	count = 0;
	x = (unsigned long)p;
	if (ptr == (void *)0)
		return (ft_putstr("(nil)"));
	count += write(1, "0x", 2);
	count += print_address(x);
	return (count);
}
