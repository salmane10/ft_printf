/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:35:13 by slouham           #+#    #+#             */
/*   Updated: 2024/01/16 14:52:51 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf"

static	int		format()
{
	if (format[] == 'c')
		ft_putchar()
	else if (format[] == 'd' || format[] == 'i')
		ft_putnbr()
	else if (format[] == 's')
		ft_putstr()
}

int		ft_printf(const char *str, ...)
{
	va_list list;
	int		cmp;
	int		i;

	i = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				break;
			format(list, (char *)str + i, &cmp);
		}
		else
			ft_putchar(str[i], &cmp);
		i++;
	}
	va_end(list);
	return ((int)cmp);
}
