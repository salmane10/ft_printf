/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:35:13 by slouham           #+#    #+#             */
/*   Updated: 2024/02/01 10:51:17 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_put_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_hex_down(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_hex_up(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_putmem(va_arg(args, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		count += ft_putchar('%');
	count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i+1] == '\0')
			return (-1);
		if (str[i] == '%')
			count += check(str[++i], args);
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}