/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:35:13 by slouham           #+#    #+#             */
/*   Updated: 2024/01/20 15:06:30 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	int		i;
	int		r;
	va_list args;

	i = 0;
	va_start(args, str);

    if (!str || !str[0])
        return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				r = va_arg(args, int);
				ft_putchar(r);
			}
            else if (str[i] == 's')
            {
                r = va_arg(args, char *);
                ft_putstr((char *)r);
            }
            else if (str[i] == 'd' || str[i] == 'i')
            {
                r = va_arg(args, int);
                ft_putnbr(r);
            }
        }
        else 
        {
            ft_putchar(str[i]);
            r++;
        }
        i++;
	}
    
	va_end(args);
	return (r);
}

int main()
  {
    ft_printf("%c\n", 'S');
    ft_printf("%d\n", 22);
    ft_printf("%s\n", "hello salmane");
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