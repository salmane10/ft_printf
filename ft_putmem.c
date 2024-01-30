/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:57:25 by slouham           #+#    #+#             */
/*   Updated: 2024/01/30 15:18:47 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_address(unsigned long long x)
{
	int		counter;
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
	int					count;
	unsigned long long	x;

	count = 0;
	x = (unsigned long long)p;
	if (p == (void *)0)
		return (ft_putstr("(nil)"));
	count += write(1, "0x", 2);
	count += print_address(x);
	return (count);
}
