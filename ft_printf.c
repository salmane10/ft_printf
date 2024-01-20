/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:35:13 by slouham           #+#    #+#             */
/*   Updated: 2024/01/20 18:39:49 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void check(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
	else
	{
		ft_putchar('%');
		ft_putchar(c);
	}
}

int		ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list args;

	i = 0;
	count = 0;
	va_start(args, str);

    if (!str || !str[0])
        return (-1);
	while (str[i])
	{
		if (str[i] == '%')
			check(str[++i], args);
        else 
			ft_putchar(str[i]);  
        i++;
	}
	va_end(args);
	return (count);
}

/*int main()
{
    ft_printf("hello mr %c your name is %s and %r %p your age is %d", 's', "salmane", 2255);
    return (0);
}


/*#include "ft_printf.h"

static	int		format()
{
	int	i;
	int	result;

	i = 0;
	if (format[i] == 'c')
		result += (va_arg(list, int));
	//else if (format[] == 'd' || format[] == 'i')
	//	ft_putnbr()
	//else if (format[] == 's')
	//	ft_putstr()
}

int		ft_printf(const char *str, ...)
{
	int		i;
	int		r;
	va_list args;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				r = va_arg(args, int);
				ft_putchar(r);
			//format(args, (char *)str + i);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return ((r);
}*/
