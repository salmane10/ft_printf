/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:13:30 by slouham           #+#    #+#             */
/*   Updated: 2024/02/08 14:36:49 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_up(unsigned int nb)
{
	int		count;
	char	*base;

	base = "0123456789ABCDEF";
	count = 0;
	if (nb < 16)
		count += ft_putchar(base[nb]);
	else
	{
		count += ft_hex_up(nb / 16);
		count += ft_putchar(base[nb % 16]);
	}
	return (count);
}
